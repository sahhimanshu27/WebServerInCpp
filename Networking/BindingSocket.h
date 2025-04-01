//
// Created by Himanshu Sah on 4/1/25.
//

#ifndef BINDINGSOCKET_H
#define BINDINGSOCKET_H

#include <stdio.h>

#include "SimpleSocket.h"

namespace HDE {
    class BindingSocket : public SimpleSocket {
        public:
        BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface);
        int connect_to_network(int sock, struct sockaddr_in address) override;
    };
}

#endif //BINDINGSOCKET_H
