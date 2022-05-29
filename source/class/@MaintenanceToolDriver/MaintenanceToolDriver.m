classdef MaintenanceToolDriver
    %维护工具的驱动
    %   支撑ART_ADAS_TOOLS软件的主要功能
    
    %公开属性
    properties
        
        % UI图对象
        UI_figure(1, 1)
        
        % 主控板目标IP，字符数组
        target_IP(1, :) char
        
        % 中文版车型列表，cell
        tram_type_list(:, :) cell
        
        % 英文版车型代号，cell
        tram_type_symbols(:, :) cell
        
        % 车型索引，double
        tram_type_index(1, 1) double
        
        % Telnet连接对象
        telnet_object(1, 1)
        
        % 驾驶室索引，double
        cab_index(1, 1) double
        
    end
    
    %成员函数
    methods
        
        %构造MAINTENANCETOOLDRIVER类的一个实例
        %   记录UI图对象、主控板目标IP、驾驶室索引以供维护工具的驱动使用
        function obj = MaintenanceToolDriver(UI_figure, target_IP, cab_index)
            
            % 如果输入了大于等于1个的参数，将第1个参数赋予UI图对象属性
            if 1 <= nargin
                obj.UI_figure = UI_figure;
            end
            
            % 如果输入了大于等于2个的参数，将第2个参数赋予主控板目标IP属性
            if 2 <= nargin
                obj.target_IP = target_IP;
            end
            
            % 如果输入了大于等于3个的参数，将第3个参数赋予驾驶室索引属性
            if 3 <= nargin
                obj.cab_index = cab_index;
            end
            
        end
        
        %刷新ADAS软件
        %   将循迹控制软件的目标码、配置文件通过FTP上传到主控板
        [] = ADAS_software_refresh(obj)
        
        %刷新ADAS配置文件
        %   指定循迹控制软件中的一份XML配置文件通过FTP上传到主控板
        [] = ADAS_config_file_refresh(obj, file_name)
        
        %计算方向盘与转向轴软件零位补偿值
        %   根据测试采集到的动态传动比文件数据统计方向盘与转向轴软件零位补偿值
        [MC1_steering_wheel_angle_compensation, ...
            MC2_steering_wheel_angle_compensation, ...
            MC1_steering_axle_angle_compensation, ...
            MC2_steering_axle_angle_compensation] = Calculate_compensation(...
            obj, file_full_path)
        
        %获取任务代号
        %   获取主控板内的实时任务代号
        task_index = Get_task_index(obj)
        
        %获取A0偏置值
        %   获取主控板内的实时A0偏置值
        A0_offset = Get_A0_offset(obj)
        
        %获取第一阶段A0偏置值
        %   针对永修项目获取主控板内的实时第一阶段A0偏置值
        A0_s1_offset = Get_A0_s1_offset(obj)
        
        %获取第二阶段A0偏置值
        %   针对永修项目获取主控板内的实时第二阶段A0偏置值
        A0_s2_offset = Get_A0_s2_offset(obj)
        
        %获取A0切换阈值
        %   针对永修项目获取主控板内的实时切换A0到第二阶段的方向盘转角阈值
        A0_switch_threshold = Get_A0_switch_threshold(obj)
        
        %获取A1偏置值
        %   获取主控板内的实时A1偏置值
        A1_offset = Get_A1_offset(obj)
        
        %获取横摆角偏置值
        %   获取主控板内的实时横摆角偏置值
        yaw_angle_offset = Get_yaw_angle_offset(obj)
        
        %获取XML文件中的配置参数值
        %   按参数隶属的父节点名称和参数名称查询数值
        parameter_value = Get_XML_config_parameter_value(obj, file_path, ...
            parent_node_name, parameter_name)
        
        %获取横向控制软件版本
        %   查询主控板上运行的横向控制软件版本
        software_version = Get_lateral_control_software_version(obj)
        
        %获取原始方向盘转角
        %   查询实时自动转向控制器数据中的原始方向盘转角数值
        original_steering_wheel_angle = Get_original_steering_wheel_angle(obj)
        
        %获取控制器内原有ADAS文件
        %   通过FTP下载主控板内原有循迹控制软件目标码、配置文件
        [] = Get_previous_ADAS_files(obj)
        
        %输出端口模式设置
        %   设置主控板循迹控制软件输出端口模式
        [] = Output_port_mode_set(obj, mode_index)
        
        %端口临时数据TRDP协议输入检查
        %   端口临时数据TRDP协议输入核对时根据变量名称查询数值
        [current_value, nonzero_number] = ...
            Port_data_TRDP_protocol_input_check(obj, variable_name)
        
        %通过变量名解锁端口临时数据
        %   设置某个变量数值之后，需要解锁才能恢复正常程序运行
        [] = Port_data_unlock_by_name(obj, variable_name)
        
        %通过变量名修改端口临时数据数值
        %   实时修改端口临时数据数值为指定数值
        [] = Port_data_value_set_by_name(obj, variable_name, set_value)
        
        %端口临时数据设置为最大值
        %   实时修改端口临时数据数值为最大值
        [] = Port_data_value_set_max(obj, variable_name)
        
        %端口临时数据设置为最小值
        %   实时修改端口临时数据数值为最小值
        [] = Port_data_value_set_min(obj, variable_name)
        
        %端口临时数据设置为零
        %   实时修改端口临时数据数值为零
        [] = Port_data_value_set_zero(obj, variable_name)
        
        %通过变量名查看端口临时数据数值
        %   实时查询端口临时数据数值
        current_value = Port_data_value_show_by_name(obj, variable_name)
        
        %读取新风格ADASCFG文件中的关键参数值
        %   读取新风格XML配置文件中的关键参数清单数值
        key_parameter = Read_new_style_ADAS_config_file_key_parameter_value(...
            obj, file_path)
        
        %读取老风格ADASCFG文件中的关键参数值
        %   读取老风格XML配置文件中的关键参数清单数值
        key_parameter = Read_old_style_ADAS_config_file_key_parameter_value(...
            obj, file_path)
        
        %设置A0偏置值
        %   实时调整主控板循迹控制软件A0偏置值
        [] = Set_A0_offset(obj, input_value)
        
        %设置第一阶段A0偏置值
        %   针对永修项目实时调整主控板循迹控制软件第一阶段A0偏置值
        [] = Set_A0_s1_offset(obj, input_value)
        
        %设置第二阶段A0偏置值
        %   针对永修项目实时调整主控板循迹控制软件第二阶段A0偏置值
        [] = Set_A0_s2_offset(obj, input_value)
        
        %设置A1偏置值
        %   实时调整主控板循迹控制软件A1偏置值
        [] = Set_A1_offset(obj, input_value)
        
        %设置横摆角偏置值
        %   实时调整主控板循迹控制软件横摆角偏置值
        [] = Set_yaw_angle_offset(obj, set_value)
        
        %设置嵌入式系统时间
        %   连接主控板时顺便设置系统时间
        [] = Set_embeded_system_time(obj)
        
        %设置方向盘机械零位
        %   一键设置零位、释放设置指令
        [] = Steering_wheel_angle_set_zero(obj)
        
        %备用指令设置方向盘机械零位
        %   针对一些古老设备使用的备用设置指令
        [] = Steering_wheel_angle_set_zero_old(obj)
        
        %建立Telnet连接
        %   建立与主控板之间的Telnet连接
        obj = Telnet_connect(obj)
        
        %断开Telnet连接
        %   断开与主控板之间的Telnet连接
        [] = Telnet_disconnect(obj)
        
        %热重启控制器
        %   Telnet热重启主控板
        [] = Telnet_reboot(obj)
        
        %更新XML文件中的参数值
        %   更新XML文件中的指定参数数值
        [] = Update_XML_parameter_value(obj, file_path, parameter_name, ...
            parameter_value)
        
        %更新新版ADASCFG文件
        %   更新新风格XML配置文件中的关键参数清单数值
        [] = Update_new_ADAS_config_file(obj, file_path, key_parameter)
        
        %设置任务代号
        %   设置数据记录断点标识
        [] = Set_task_index(obj, input_value)
        
        %刷新参考轨迹文件
        %   通过文件名指定一个参考轨迹文件，上传到PU300中
        [] = Reference_trajectory_refresh(obj, trajectory_file_name)
        
        %设置相对坐标原点纬度
        %   实时修改主控板内地图管理单元软件的相对坐标原点纬度，通常在采集地图之前修改
        [] = Set_grid_origin_latitude(obj, set_value)
        
        %获取相对坐标原点纬度数值
        %   实时查询主控板内地图管理单元软件的相对坐标原点纬度
        grid_origin_latitude = Get_grid_origin_latitude(obj)
        
        %设置相对坐标原点经度
        %   实时修改主控板内地图管理单元软件的相对坐标原点经度，通常在采集地图之前修改
        [] = Set_grid_origin_longitude(obj, set_value)
        
        %获取相对坐标原点经度数值
        %   实时查询主控板内地图管理单元软件的相对坐标原点经度
        grid_origin_longitude = Get_grid_origin_longitude(obj)
        
        %设置地图管理单元的参考轨迹索引
        %   实时修改主控板内地图管理单元软件的参考轨迹索引
        [] = Set_reference_trajectory_index(obj, set_value)
        
        %获取参考轨迹索引
        %   实时查询主控板内地图管理单元软件的参考轨迹索引
        reference_trajectory_index = Get_reference_trajectory_index(obj)
        
        %计算组合惯导横摆角软件零位补偿值
        %   根据测试采集到的组合惯导软件零位标定文件数据统计组合惯导横摆角软件零位补偿值
        [MC1_yaw_angle_compensation, MC2_yaw_angle_compensation] = ...
            Calculate_yaw_angle_compensation(obj, file_full_path)
        
    end
    
end
