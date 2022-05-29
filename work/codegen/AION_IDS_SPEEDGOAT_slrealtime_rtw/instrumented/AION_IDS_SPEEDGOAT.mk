###########################################################################
## Makefile generated for component 'AION_IDS_SPEEDGOAT'. 
## 
## Makefile     : AION_IDS_SPEEDGOAT.mk
## Generated on : Fri May 27 16:05:13 2022
## Final product: $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = AION_IDS_SPEEDGOAT
MAKEFILE                  = AION_IDS_SPEEDGOAT.mk
MATLAB_ROOT               = D:/R2021a
MATLAB_BIN                = D:/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/GitHub/ART-IDS-Team/ART_IDS/work/codegen
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# SLREALTIME_QNX_SP_ROOT
# SLREALTIME_QNX_VERSION

#-----------
# MACROS
#-----------

QCC_TARGET             = gcc_ntox86_64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/target/lib -ltraceparser -lpps -lslrealtime_kernel -lslrealtime_rtps -lsocket -lboost_system -lboost_log -lpci -lopenblas

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: QNX C Compiler
CC = qcc

# Linker: QCC Linker
LD = q++

# C++ Compiler: QNX C++ Compiler
CPP = q++

# C++ Linker: QCC C++ Linker
CPP_LD = q++

# Archiver: QNX Archiver
AR = ntox86_64-gcc-ar

# Builder: GMAKE Utility
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -V$(QCC_TARGET) -g \
                       -O2 -fwrapv
CPPFLAGS             = -c -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++ \
                       -O2 -fwrapv
CPP_LDFLAGS          = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
CPP_SHAREDLIB_LDFLAGS  = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g
LDFLAGS              = -V$(QCC_TARGET) -g -std=gnu++14 -stdlib=libstdc++
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -V$(QCC_TARGET) -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/slprj/slrealtime/AION_signal_transfer -I$(START_DIR)/slprj/slrealtime/AION_auto_mode_request -I$(START_DIR) -I$(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021a/920~1.1_2/SG_BLO~1/common/libsg -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021a/920~1.1_2 -IC:/PROGRA~3/SPEEDG~1/SPEEDG~1/R2021a/920~1.1_2/SG_BLO~1/can/include -I$(MATLAB_ROOT)/toolbox/shared/can/src/scanutil -I$(START_DIR)/slprj/slrealtime/_sharedutils -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/dist/include -I$(MATLAB_ROOT)/toolbox/slrealtime/target/kernel/dist/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSIMULINK_REAL_TIME
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DEXT_MODE=1 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=AION_IDS_SPEEDGOAT -DNUMST=4 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c $(MATLAB_ROOT)/rtw/c/src/rt_printf.c $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/slrealtime_datatype_ground.c $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT.cpp $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_cal.cpp $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_data.cpp $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/can_datatype_ground.cpp $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_calintf.cpp $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/main.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO612_setup_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO61X_read_s.cpp C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO61X_write_s.cpp host_timer_x86.c slrealtime_code_profiling_utility_functions.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = rt_matrx.o rt_printf.o slrealtime_datatype_ground.o AION_IDS_SPEEDGOAT.o AION_IDS_SPEEDGOAT_cal.o AION_IDS_SPEEDGOAT_data.o can_datatype_ground.o AION_IDS_SPEEDGOAT_calintf.o main.o sg_IO612_setup_s.o sg_IO61X_read_s.o sg_IO61X_write_s.o host_timer_x86.o slrealtime_code_profiling_utility_functions.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

MODELREF_LIBS = ../../slprj/slrealtime/AION_auto_mode_request/instrumented/AION_auto_mode_request_rtwlib.a ../../slprj/slrealtime/AION_signal_transfer/instrumented/AION_signal_transfer_rtwlib.a

LIBS = C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/include/IO61X_Library_qnx710_x86_64.a $(START_DIR)/slprj/slrealtime/_sharedutils/instrumented/rtwshared.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/common/libsg -lsg_qnx710_x86_64

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/common/libsg -lsg_qnx710_x86_64

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/common/libsg -lsg_qnx710_x86_64

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -LC:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/common/libsg -lsg_qnx710_x86_64

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) -Wl,--start-group ../../slprj/slrealtime/AION_auto_mode_request/instrumented/AION_auto_mode_request_rtwlib.a ../../slprj/slrealtime/AION_signal_transfer/instrumented/AION_signal_transfer_rtwlib.a -Wl,--end-group -Wl,--start-group $(LIBS) -Wl,--end-group $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : ../%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : ../%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/coder/profile/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_matrx.o : $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c
	$(CC) $(CFLAGS) -o $@ $<


rt_printf.o : $(MATLAB_ROOT)/rtw/c/src/rt_printf.c
	$(CC) $(CFLAGS) -o $@ $<


slrealtime_datatype_ground.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/slrealtime_datatype_ground.c
	$(CC) $(CFLAGS) -o $@ $<


AION_IDS_SPEEDGOAT.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


AION_IDS_SPEEDGOAT_cal.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_cal.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


AION_IDS_SPEEDGOAT_data.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_data.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


can_datatype_ground.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/can_datatype_ground.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


AION_IDS_SPEEDGOAT_calintf.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/AION_IDS_SPEEDGOAT_calintf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


main.o : $(START_DIR)/AION_IDS_SPEEDGOAT_slrealtime_rtw/main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO612_setup_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO612_setup_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO61X_read_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO61X_read_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_IO61X_write_s.o : C:/ProgramData/Speedgoat/speedgoatlib/R2021a/9.2.0.1_2/sg_blocks/can/sg_IO61X_write_s.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


