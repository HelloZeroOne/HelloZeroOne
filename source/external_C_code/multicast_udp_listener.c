//
// Simple listener.c program for UDP multicast
//
// Adapted from:
// http://ntrg.cs.tcd.ie/undergrad/4ba2/multicast/antony/example.html
//

#include "multicast_udp_listener.h"

int receive_multicast_udp_fd[N_MAX_RECEIVE_CHANNEL];
struct sockaddr_in receive_multicast_udp_addr[N_MAX_RECEIVE_CHANNEL];
uint8_T receive_multicast_udp_buffer[N_MAX_RECEIVE_CHANNEL][RECEIVE_MULTICAST_UDP_BUFFER_SIZE];
struct ip_mreq receive_mreq[N_MAX_RECEIVE_CHANNEL];

void receive_multicast_udp_port_initialize(const uint8_T *group, const int port, const int channel)
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
    receive_multicast_udp_fd[channel] = socket(AF_INET, SOCK_DGRAM, 0);
	if (receive_multicast_udp_fd[channel] < 0) {
		// status += WSAGetLastError();
    }
	unsigned long Opt = 1;
	ioctlsocket(receive_multicast_udp_fd[channel], FIONBIO, &Opt);

    // allow multiple sockets to use the same PORT number
    //
    u_int yes = 1;
    if (
        setsockopt(
            receive_multicast_udp_fd[channel], SOL_SOCKET, SO_REUSEADDR, (uint8_T*) &yes, sizeof(yes)
        ) < 0
    ){
        // status += WSAGetLastError();
    }

    // set up destination address
    //
    memset(&receive_multicast_udp_addr[channel], 0, sizeof(receive_multicast_udp_addr[channel]));
    receive_multicast_udp_addr[channel].sin_family = AF_INET;
    receive_multicast_udp_addr[channel].sin_addr.s_addr = htonl(INADDR_ANY); // differs from sender 
    receive_multicast_udp_addr[channel].sin_port = htons(port);

    // bind to receive address
    //
    if (
	    bind(receive_multicast_udp_fd[channel], (struct sockaddr*) &receive_multicast_udp_addr[channel], 
		sizeof(receive_multicast_udp_addr[channel])) < 0) {
        // status += WSAGetLastError();
    }
	
	// use setsockopt() to request that the kernel enable multicast loop
    //
	int loopBack = 1;
    if (
        setsockopt(
            receive_multicast_udp_fd[channel], IPPROTO_IP, IP_MULTICAST_LOOP, (const char *)&loopBack, sizeof(loopBack)
        ) < 0
    ){
        // status += WSAGetLastError();
    }

    // use setsockopt() to request that the kernel join a multicast group
    //
	memset(&receive_mreq[channel], 0, sizeof(struct ip_mreq));
    receive_mreq[channel].imr_multiaddr.s_addr = inet_addr(group);
    receive_mreq[channel].imr_interface.s_addr = htonl(INADDR_ANY);
    if (
        setsockopt(
            receive_multicast_udp_fd[channel], IPPROTO_IP, IP_ADD_MEMBERSHIP, (const char *)&(receive_mreq[channel]), sizeof(struct ip_mreq)
        ) < 0
    ){
        // status += WSAGetLastError();
    }
	
	// return status;
}

int receive_multicast_udp_data(const int channel)
{
	int addrlen = sizeof(receive_multicast_udp_addr[channel]);
    int nbytes = recvfrom(
            receive_multicast_udp_fd[channel],
            receive_multicast_udp_buffer[channel],
            RECEIVE_MULTICAST_UDP_BUFFER_SIZE,
            0,
            (struct sockaddr *) &receive_multicast_udp_addr[channel],
            &addrlen
        );
	return nbytes;
}

uint8_T* get_multicast_udp_data(const int channel)
{
	return receive_multicast_udp_buffer[channel];
}

void release_receive_multicast_udp_buffer(const int channel)
{
    //
    // Program never actually gets here due to infinite loop that has to be
    // canceled, but since people on the internet wind up using examples
    // they find at random in their own code it's good to show what shutting
    // down cleanly would look like.
    //
	setsockopt(
        receive_multicast_udp_fd[channel], IPPROTO_IP, IP_DROP_MEMBERSHIP, (const char *)&(receive_mreq[channel]), sizeof(struct ip_mreq)
    );
	close(receive_multicast_udp_fd[channel]);
    WSACleanup();
}
