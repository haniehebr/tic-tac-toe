/*
	Initialise Winsock
*/

#include<stdio.h>
#include<winsock2.h>
#include <iostream>
#include<string>
#include<thread>

using namespace std;

#pragma comment(lib,"ws2_32.lib") //Winsock Library
#pragma warning(disable:4996) 



void sendTo(SOCKET s)
{
	string msg;

	while (1)
	{
		getline(cin, msg);
		if (send(s, msg.c_str(), msg.length(), 0) < 0)
		{
			puts("Send failed");
		}
		system("cls");
	}
}

void receiveFrom(SOCKET s)
{
	while (1)
	{
		int recv_size;
		char server_reply[2000];
		if ((recv_size = recv(s, server_reply, 2000, 0)) == SOCKET_ERROR)
		{
			puts("recv failed");
		}
		server_reply[recv_size] = '\0';
		cout << server_reply << endl;
	}
}

int main(int argc, char* argv[])
{
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;

	cout << "\nInitialising Winsock...";
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		cout << "Failed. Error Code " << WSAGetLastError();
		return 1;
	}

	cout << "Initialised.";

	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		cout << "Could not create socket" << WSAGetLastError();
	}

	cout << "Socket created." << endl;

	server.sin_addr.s_addr = inet_addr("192.168.1.51");
	server.sin_family = AF_INET;
	server.sin_port = htons(1234);

	//Connect to remote server
	if (connect(s, (struct sockaddr*)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("Connected");

	//Send name
	cout << "enter your name:" << endl;
	string name;
	cin >> name;

	if (send(s, name.c_str(), name.length(), 0) < 0)
	{
		puts("Send failed");
		return 1;
	}

	thread sThread(sendTo, s);
	thread rThread(receiveFrom, s);

	sThread.join();
	rThread.join();



	closesocket(s);
	WSACleanup();

	return 0;
}