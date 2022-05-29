//
// Simple sender.c program for UDP
//
// Adapted from:
// http://ntrg.cs.tcd.ie/undergrad/4ba2/multicast/antony/example.html
//

#include "multicast_udp_sender.h"

int send_multicast_udp_fd[N_MAX_SEND_CHANNEL];
struct sockaddr_in send_multicast_udp_addr[N_MAX_SEND_CHANNEL];
struct ip_mreq send_mreq[N_MAX_SEND_CHANNEL];

void send_multicast_udp_port_initialize(const uint8_T *group, const int port, const int channel)
{
	// int status = 0;
	
	//
    // Initialize Windows Socket API with given VERSION.
    //
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2,2), &wsaData)) {
        // status += WSAGetLastError();
    }

    // create what looks like an ordinary UDP socket
    //
    send_multicast_udp_fd[channel] = socket(AF_INET, SOCK_DGRAM, 0);
    if (send_multicast_udp_fd[channel] < 0) {
		// status += WSAGetLastError();
    }
	unsigned long Opt = 1;
	ioctlsocket(send_multicast_udp_fd[channel], FIONBIO, &Opt);
	
	// allow multiple sockets to use the same PORT number
    //
    u_int yes = 1;
    if (
        setsockopt(
            send_multicast_udp_fd[channel], SOL_SOCKET, SO_REUSEADDR, (uint8_T*) &yes, sizeof(yes)
        ) < 0
    ){
       // status += WSAGetLastError();
    }
	
	// set up destination address
    //
    memset(&send_multicast_udp_addr[channel], 0, sizeof(send_multicast_udp_addr[channel]));
    send_multicast_udp_addr[channel].sin_family = AF_INET;
    send_multicast_udp_addr[channel].sin_addr.s_addr = inet_addr(group);
    send_multicast_udp_addr[channel].sin_port = htons(port);
	
	// use setsockopt() to request that the kernel enable multicast loop
    //
	int loopBack = 1;
    if (
        setsockopt(
            send_multicast_udp_fd[channel], IPPROTO_IP, IP_MULTICAST_LOOP, (const char *)&loopBack, sizeof(loopBack)
        ) < 0
    ){
        // status += WSAGetLastError();
    }
	
    // use setsockopt() to request that the kernel join a multicast group
    //
	memset(&send_mreq[channel], 0, sizeof(struct ip_mreq));
    send_mreq[channel].imr_multiaddr.s_addr = inet_addr(group);
    send_mreq[channel].imr_interface.s_addr = htonl(INADDR_ANY);
    if (
        setsockopt(
            send_multicast_udp_fd[channel], IPPROTO_IP, IP_ADD_MEMBERSHIP, (const char *)&(send_mreq[channel]), sizeof(struct ip_mreq)
        ) < 0
    ){
        // status += WSAGetLastError();
    }
	
	// return status;
}

void send_multicast_udp_data(const uint8_T *source_data, const int channel)
{
    int nbytes = sendto(
            send_multicast_udp_fd[channel],
            source_data,
            SEND_MULTICAST_UDP_BUFFER_SIZE,
            0,
            (struct sockaddr*) &send_multicast_udp_addr[channel],
            sizeof(send_multicast_udp_addr[channel])
        );
	// if (nbytes < 0) {
		// nbytes = WSAGetLastError();
	// }
	// return nbytes;
}

void release_send_multicast_udp_buffer(const int channel)
{
    //
    // Program never actually gets here due to infinite loop that has to be
    // canceled, but since people on the internet wind up using examples
    // they find at random in their own code it's good to show what shutting
    // down cleanly would look like.
    //
	setsockopt(
        send_multicast_udp_fd[channel], IPPROTO_IP, IP_DROP_MEMBERSHIP, (const char *)&(send_mreq[channel]), sizeof(struct ip_mreq)
    );
	close(send_multicast_udp_fd[channel]);
    WSACleanup();
}
