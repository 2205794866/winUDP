#include <iostream>
#include "winudp.h"


int main()
{
    udp::UdpServer server("127.0.0.1", 3000);
    server.run();
    return 0;
}