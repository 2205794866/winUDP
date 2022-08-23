#include<iostream>

#include"winudp.h"

int main()
{
    udp::UdpClient client;
    client.send("127.0.0.1", 3000, "hello");
    return 0;
}