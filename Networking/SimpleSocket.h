//
// Created by Himanshu Sah on 4/1/25.
//

#ifndef SIMPLESOCKET_H
#define SIMPLESOCKET_H

#include <cstdio>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE {
    class SimpleSocket {
    private:
        struct sockaddr_in address;
        int sock;
        int connection;
    public:
        // Constructor
        SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
        // Virtual function to connect to a network
        virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
        static void test_connection(int);
        // Getter functions
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();

        // setter function
        void set_connection(int conn);
    };
}

#endif //SIMPLESOCKET_H
