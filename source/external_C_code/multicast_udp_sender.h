#ifndef _MULTICAST_UDP_SENDER_H_
#define _MULTICAST_UDP_SENDER_H_

#ifdef __cplusplus
extern "C"
{
#endif

#pragma comment(lib,"ws2_32.lib")

#include <Winsock2.h> // before Windows.h, else Winsock 1 conflict
#include <Ws2tcpip.h> // needed for ip_mreq definition for multicast
#include <Windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "your_types.h"

#define N_MAX_SEND_CHANNEL 10
#define SEND_MULTICAST_UDP_BUFFER_SIZE 1040

extern int send_multicast_udp_fd[N_MAX_SEND_CHANNEL];
extern struct sockaddr_in send_multicast_udp_addr[N_MAX_SEND_CHANNEL];
extern struct ip_mreq send_mreq[N_MAX_SEND_CHANNEL];

extern void send_multicast_udp_port_initialize(const uint8_T *group, const int port, const int channel);
extern void send_multicast_udp_data(const uint8_T *source_data, const int channel);
extern void release_send_multicast_udp_buffer(const int channel);

#ifdef __cplusplus
}
#endif

#endif /* _MULTICAST_UDP_SENDER_H_ */ 
