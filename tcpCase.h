////<tcpCase.h>
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <errno.h>
//#include <string.h>
//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <netdb.h>
//#include <arpa/inet.h>
//#include <sys/wait.h>
//#include <signal.h>
//#include <time.h>
//
//
//#ifndef TCPCASE_H_
//#define TCPCASE_H_
//
//class tcpCase
//{
//public:
//	tcpCase(char * _port, char * _addr);
//	virtual ~tcpCase();
//
//	void startConnection();
//	bool charSearch(char *toSearch, char *searchFor);
//
//private:
//	addrinfo hints, *servinfo;
//	char *addr;
//	char *port;
//	int s; //the socket descriptor
//
//	bool sendData(char *msg);
//
//	void manageRecv(int numbytes, char * buf);
//};
//
//#endif /* TCPCASE_H_ */
//
