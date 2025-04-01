//
// Created by Himanshu Sah on 4/1/25.
//

#include "BindingSocket.h"

HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface) {
    int connection = connect_to_network(get_sock(), get_address());
    test_connection(connection);
};

int HDE::BindingSocket::connect_to_network(int sock, struct sockaddr_in address) {
    return bind(sock, (struct sockaddr*)&address, sizeof(address));
}
