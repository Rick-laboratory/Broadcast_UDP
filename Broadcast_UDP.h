#pragma comment(lib,"Ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include<WinSock2.h>
#include <iostream>
#include<string>
class Broadcast_UDP
{
public:
	Broadcast_UDP();
	~Broadcast_UDP();
	void Broadcast(std::string);
private:
	WSADATA m_wsa;
	SOCKET m_socket;
	struct sockaddr_in m_send_addr;
	int m_error = 0;
	char m_broadcast = '1';
};
