#include<io.h>
#include<winsock2.h>
#include<iostream>
#include<thread>
#include<vector>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include <string>

#pragma comment(lib,"ws2_32.lib")

using namespace std;

// baraye reayat nobat
int c = 1;
int seconds = 20;

class playground1 {
private:
	string name = "playground 1";
	int size = 9;
	int tedad = 3;
	char matrix[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
public:
	// playground function
	string playground()
	{
		string str;
		str = "\n ______     ______     ______\n";
		str += "|1     |   |2     |   |3     |\n";
		str = str + "|   " + getM(0, 0) + "  |---|   " + getM(0, 1) + "  |---|   " + getM(0, 2) + "  |\n";
		str += "|______|   |______|   |______|\n";
		str += " ___|__     ___|__     ___|__\n";
		str += "|4     |   |5     |   |6     |\n";
		str = str + "|   " + getM(1, 0) + "  |---|   " + getM(1, 1) + "  |---|   " + getM(1, 2) + "  |\n";
		str += "|______|   |______|   |______|\n";
		str += " ___|__     ___|__     ___|__\n";
		str += "|7     |   |8     |   |9     |\n";
		str = str + "|   " + getM(2, 0) + "  |---|   " + getM(2, 1) + "  |---|   " + getM(2, 2) + "  |\n";
		str += "|______|   |______|   |______|\n";
		return str;
	}
	// getter function
	char getM(int i, int j) { return matrix[i][j]; }
	int getS() { return size; }
	// setter function
	void setM(char n, int i, int j) { matrix[i][j] = n; }
	void setX(int n)
	{
		switch (n)
		{
		case 1:
			setM('X', 0, 0);
			break;
		case 2:
			setM('X', 0, 1);
			break;
		case 3:
			setM('X', 0, 2);
			break;
		case 4:
			setM('X', 1, 0);
			break;
		case 5:
			setM('X', 1, 1);
			break;
		case 6:
			setM('X', 1, 2);
			break;
		case 7:
			setM('X', 2, 0);
			break;
		case 8:
			setM('X', 2, 1);
			break;
		case 9:
			setM('X', 2, 2);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setX(n);
		}
	}
	void setO(int n)
	{
		switch (n)
		{
		case 1:
			setM('O', 0, 0);
			break;
		case 2:
			setM('O', 0, 1);
			break;
		case 3:
			setM('O', 0, 2);
			break;
		case 4:
			setM('O', 1, 0);
			break;
		case 5:
			setM('O', 1, 1);
			break;
		case 6:
			setM('O', 1, 2);
			break;
		case 7:
			setM('O', 2, 0);
			break;
		case 8:
			setM('O', 2, 1);
			break;
		case 9:
			setM('O', 2, 2);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setO(n);
		}
	}
	// win and lose function
	int X_ogame()
	{
		if ((getM(0, 0) == 'X' && getM(0, 1) == 'X' && getM(0, 2) == 'X') || (getM(1, 0) == 'X' && getM(1, 1) == 'X' && getM(1, 2) == 'X') || (getM(2, 0) == 'X' && getM(2, 1) == 'X' && getM(2, 2) == 'X') || (getM(0, 0) == 'X' && getM(1, 0) == 'X' && getM(2, 0) == 'X') || (getM(0, 1) == 'X' && getM(1, 1) == 'X' && getM(2, 1) == 'X') || (getM(0, 2) == 'X' && getM(1, 2) == 'X' && getM(2, 2) == 'X'))
			return 0;
		else
			return 1;
	}
	int x_Ogame()
	{
		if ((getM(0, 0) == 'O' && getM(0, 1) == 'O' && getM(0, 2) == 'O') || (getM(1, 0) == 'O' && getM(1, 1) == 'O' && getM(1, 2) == 'O') || (getM(2, 0) == 'O' && getM(2, 1) == 'O' && getM(2, 2) == 'O') || (getM(0, 0) == 'O' && getM(1, 0) == 'O' && getM(2, 0) == 'O') || (getM(0, 1) == 'O' && getM(1, 1) == 'O' && getM(2, 1) == 'O') || (getM(0, 2) == 'O' && getM(1, 2) == 'O' && getM(2, 2) == 'O'))
			return 0;

		else
			return 1;
	}

};
class playground2 {
private:
	string name = "playground 2";
	int size = 16;
	int tedad = 3;
	char matrix[5][4] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
public:
	// playground function
	string playground()
	{
		string str;
		str = "\n ______                 ______                 ______\n";;
		str += "|1     |               |2     |               |3     |\n";
		str = str + "|  " + getM(0, 0) + "   |---------------|  " + getM(0, 1) + "   |---------------|  " + getM(0, 2) + "   |\n";
		str += "|______|               |______|               |______|\n";
		str += "    |                      |                      |\n";
		str += "    |      ______       ___|__       ______       |\n";
		str += "    |     |4     |     |5     |     |6     |      |\n";
		str = str + "    |     |  " + getM(1, 0) + "   |-----|  " + getM(1, 1) + "   |-----|  " + getM(1, 2) + "   |      |\n";
		str += "    |     |______|     |______|     |______|      |\n";
		str += " ___|__    ___|__                    __|___    ___|__\n";
		str += "|7     |  |8     |                  |9     |  |10    |\n";
		str = str + "|  " + getM(2, 0) + "   |--|  " + getM(2, 1) + "   |                  |  " + getM(2, 2) + "   |--|  " + getM(2, 3) + "   |\n";
		str += "|______|  |______|                  |______|  |______|\n";
		str += "    |      ___|__       ______       __|___       |\n";
		str += "    |     |11    |     |12    |     |13    |      |\n";
		str = str + "    |     |  " + getM(3, 0) + "   |-----|  " + getM(3, 1) + "   |-----|  " + getM(3, 2) + "   |      |\n";
		str += "    |     |______|     |______|     |______|      |\n";
		str += "    |                      |                      |\n";
		str += " ___|__                 ___|__                 ___|__\n";
		str += "|14    |               |15    |               |16    |\n";
		str = str + "|  " + getM(4, 0) + "   |---------------|  " + getM(4, 1) + "   |---------------|  " + getM(4, 2) + "   |\n";
		str += "|______|               |______|               |______|\n";
		return str;
	}
	// getter function
	char getM(int i, int j) { return matrix[i][j]; }
	int getS() { return size; }
	// setter function
	void setM(char n, int i, int j) { matrix[i][j] = n; }
	void setX(int n)
	{
		switch (n)
		{
		case 1:
			setM('X', 0, 0);
			break;
		case 2:
			setM('X', 0, 1);
			break;
		case 3:
			setM('X', 0, 2);
			break;
		case 4:
			setM('X', 1, 0);
			break;
		case 5:
			setM('X', 1, 1);
			break;
		case 6:
			setM('X', 1, 2);
			break;
		case 7:
			setM('X', 2, 0);
			break;
		case 8:
			setM('X', 2, 1);
			break;
		case 9:
			setM('X', 2, 2);
			break;
		case 10:
			setM('X', 2, 3);
			break;
		case 11:
			setM('X', 3, 0);
			break;
		case 12:
			setM('X', 3, 1);
			break;
		case 13:
			setM('X', 3, 2);
			break;
		case 14:
			setM('X', 4, 0);
			break;
		case 15:
			setM('X', 4, 1);
			break;
		case 16:
			setM('X', 4, 2);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setX(n);
		}
	}
	void setO(int n)
	{
		switch (n)
		{
		case 1:
			setM('O', 0, 0);
			break;
		case 2:
			setM('O', 0, 1);
			break;
		case 3:
			setM('O', 0, 2);
			break;
		case 4:
			setM('O', 1, 0);
			break;
		case 5:
			setM('O', 1, 1);
			break;
		case 6:
			setM('O', 1, 2);
			break;
		case 7:
			setM('O', 2, 0);
			break;
		case 8:
			setM('O', 2, 1);
			break;
		case 9:
			setM('O', 2, 2);
			break;
		case 10:
			setM('O', 2, 3);
			break;
		case 11:
			setM('O', 3, 0);
			break;
		case 12:
			setM('O', 3, 1);
			break;
		case 13:
			setM('O', 3, 2);
			break;
		case 14:
			setM('O', 4, 0);
			break;
		case 15:
			setM('O', 4, 1);
			break;
		case 16:
			setM('O', 4, 2);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setO(n);
		}
	}
	// win and lose function
	int X_ogame()
	{
		if ((getM(0, 0) == 'X' && getM(0, 1) == 'X' && getM(0, 2) == 'X') || (getM(1, 0) == 'X' && getM(1, 1) == 'X' && getM(1, 2) == 'X') || (getM(3, 0) == 'X' && getM(3, 1) == 'X' && getM(1, 2) == 'X') || (getM(4, 0) == 'X' && getM(4, 1) == 'X' && getM(4, 2) == 'X') || (getM(0, 0) == 'X' && getM(2, 0) == 'X' && getM(4, 0) == 'X') || (getM(1, 0) == 'X' && getM(2, 1) == 'X' && getM(4, 0) == 'X') || (getM(1, 2) == 'X' && getM(2, 2) == 'X' && getM(4, 1) == 'X') || (getM(0, 2) == 'X' && getM(2, 3) == 'X' && getM(4, 2) == 'X'))
			return 0;
		else
			return 1;
	}
	int x_Ogame()
	{
		if ((getM(0, 0) == 'O' && getM(0, 1) == 'O' && getM(0, 2) == 'O') || (getM(1, 0) == 'O' && getM(1, 1) == 'O' && getM(1, 2) == 'O') || (getM(3, 0) == 'O' && getM(3, 1) == 'O' && getM(1, 2) == 'O') || (getM(4, 0) == 'O' && getM(4, 1) == 'O' && getM(4, 2) == 'O') || (getM(0, 0) == 'O' && getM(2, 0) == 'O' && getM(4, 0) == 'O') || (getM(1, 0) == 'O' && getM(2, 1) == 'O' && getM(4, 0) == 'O') || (getM(1, 2) == 'O' && getM(2, 2) == 'O' && getM(4, 1) == 'O') || (getM(0, 2) == 'O' && getM(2, 3) == 'O' && getM(4, 2) == 'O'))
			return 0;
		else
			return 1;
	}

};
class playground3 {
private:
	string name = "playground 3";
	int size = 21;
	int tedad = 3;
	char matrix[7][6] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
public:
	// playground function
	string playground() {
		string str;
		str += "\n ______                      ______                      ______\n";
		str += "|1     |                    |2     |                    |3     |\n";
		str = str + "|  " + getM(0, 0) + "   |--------------------|  " + getM(0, 1) + "   |--------------------|  " + getM(0, 2) + "   |\n";
		str += "|______|                    |______|                    |______|\n";
		str += "    |    ______              ___|__              ______     |   \n";
		str += "    |   |4     |            |5     |            |6     |    |\n";
		str = str + "    |   |  " + getM(1, 0) + "   |------------|  " + getM(1, 1) + "   |------------|  " + getM(1, 2) + "   |    |\n";
		str += "    |   |______|            |______|            |______|    |\n";
		str += "    |       |    ______      ___|__      ______     |       |\n";
		str += "    |       |   |7     |    |8     |    |9     |    |       |\n";
		str = str + "    |       |   |  " + getM(2, 0) + "   |----|  " + getM(2, 1) + "   |----|   " + getM(2, 2) + "  |    |       |\n";
		str += "    |       |   |______|    |______|    |______|    |       |\n";
		str += " ___|__   __|__   __|__                  ___|__   __|__   __|__\n";
		str += "|10    | |11   | |12   |                |13    | |14   | |15   |\n";
		str = str + "|  " + getM(3, 0) + "   |-|  " + getM(3, 1) + "  |-|  " + getM(3, 2) + "  |                |  " + getM(3, 3) + "   |-|  " + getM(3, 4) + "  |-|  " + getM(3, 5) + "  |\n";
		str += "|______| |_____| |_____|                |______| |_____| |_____|\n";
		str += "    |       |    ___|__                  ___|__     |       |\n";
		str += "    |       |   |16    |                |17    |    |       |\n";
		str = str + "    |       |   |  " + getM(4, 0) + "   |----------------|  " + getM(4, 1) + "   |    |       |\n";
		str += "    |       |   |______|                |______|    |       |\n";
		str += "    |    ___|__/                                \\___|__     |\n";
		str += "    |   |18    |                                |19    |    |\n";
		str = str + "    |   |  " + getM(5, 0) + "   |--------------------------------|  " + getM(5, 1) + "   |    |\n";
		str += "    |   |______|                                |______|    |\n";
		str += " ___|__/                                                \\___|__\n";
		str += "|20    |                                                |21    |\n";
		str = str + "|  " + getM(6, 0) + "   |------------------------------------------------|  " + getM(6, 1) + "   |\n";
		str += "|______|                                                |______|\n";
		return str;
	}
	// getter function
	char getM(int i, int j) { return matrix[i][j]; }
	int getS() { return size; }
	// setter function
	void setM(char n, int i, int j) { matrix[i][j] = n; }
	void setX(int n)
	{
		switch (n)
		{
		case 1:
			setM('X', 0, 0);
			break;
		case 2:
			setM('X', 0, 1);
			break;
		case 3:
			setM('X', 0, 2);
			break;
		case 4:
			setM('X', 1, 0);
			break;
		case 5:
			setM('X', 1, 1);
			break;
		case 6:
			setM('X', 1, 2);
			break;
		case 7:
			setM('X', 2, 0);
			break;
		case 8:
			setM('X', 2, 1);
			break;
		case 9:
			setM('X', 2, 2);
			break;
		case 10:
			setM('X', 3, 0);
			break;
		case 11:
			setM('X', 3, 1);
			break;
		case 12:
			setM('X', 3, 2);
			break;
		case 13:
			setM('X', 3, 3);
			break;
		case 14:
			setM('X', 3, 4);
			break;
		case 15:
			setM('X', 3, 5);
			break;
		case 16:
			setM('X', 4, 0);
			break;
		case 17:
			setM('X', 4, 1);
			break;
		case 18:
			setM('X', 5, 0);
			break;
		case 19:
			setM('X', 5, 1);
			break;
		case 20:
			setM('X', 6, 0);
			break;
		case 21:
			setM('X', 6, 1);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setX(n);
		}
	}
	void setO(int n)
	{
		switch (n)
		{
		case 1:
			setM('O', 0, 0);
			break;
		case 2:
			setM('O', 0, 1);
			break;
		case 3:
			setM('O', 0, 2);
			break;
		case 4:
			setM('O', 1, 0);
			break;
		case 5:
			setM('O', 1, 1);
			break;
		case 6:
			setM('O', 1, 2);
			break;
		case 7:
			setM('O', 2, 0);
			break;
		case 8:
			setM('O', 2, 1);
			break;
		case 9:
			setM('O', 2, 2);
			break;
		case 10:
			setM('O', 3, 0);
			break;
		case 11:
			setM('O', 3, 1);
			break;
		case 12:
			setM('O', 3, 2);
			break;
		case 13:
			setM('O', 3, 3);
			break;
		case 14:
			setM('O', 3, 4);
			break;
		case 15:
			setM('O', 3, 5);
			break;
		case 16:
			setM('O', 4, 0);
			break;
		case 17:
			setM('O', 4, 1);
			break;
		case 18:
			setM('O', 5, 0);
			break;
		case 19:
			setM('O', 5, 1);
			break;
		case 20:
			setM('O', 6, 0);
			break;
		case 21:
			setM('O', 6, 1);
			break;
		default:
			int n;
			cout << "wrong choice" << endl;
			cin >> n;
			setO(n);
		}
	}
	// win and lose function
	int X_ogame()
	{
		if ((getM(0, 0) == 'X' && getM(0, 1) == 'X' && getM(0, 2) == 'X') || (getM(1, 0) == 'X' && getM(1, 1) == 'X' && getM(1, 2) == 'X') || (getM(2, 0) == 'X' && getM(2, 1) == 'X' && getM(2, 2) == 'X') || (getM(3, 0) == 'X' && getM(3, 1) == 'X' && getM(3, 2) == 'X') || (getM(3, 3) == 'X' && getM(3, 4) == 'X' && getM(3, 5) == 'X') || (getM(0, 0) == 'X' && getM(3, 0) == 'X' && getM(6, 0) == 'X') || (getM(1, 0) == 'X' && getM(3, 1) == 'X' && getM(5, 0) == 'X') || (getM(2, 0) == 'X' && getM(3, 2) == 'X' && getM(4, 0) == 'X') || (getM(0, 1) == 'X' && getM(1, 1) == 'X' && getM(2, 1) == 'X') || (getM(2, 2) == 'X' && getM(3, 3) == 'X' && getM(4, 1) == 'X') || (getM(1, 2) == 'X' && getM(3, 4) == 'X' && getM(5, 1) == 'X') || (getM(0, 2) == 'X' && getM(3, 5) == 'X' && getM(6, 6) == 'X') || (getM(4, 0) == 'X' && getM(5, 0) == 'X' && getM(6, 0) == 'X') || (getM(4, 1) == 'X' && getM(5, 1) == 'X' && getM(6, 1) == 'X'))
			return 0;
		else
			return 1;
	}
	int x_Ogame()
	{
		if ((getM(0, 0) == 'O' && getM(0, 1) == 'O' && getM(0, 2) == 'O') || (getM(1, 0) == 'O' && getM(1, 1) == 'O' && getM(1, 2) == 'O') || (getM(2, 0) == 'O' && getM(2, 1) == 'O' && getM(2, 2) == 'O') || (getM(3, 0) == 'O' && getM(3, 1) == 'O' && getM(3, 2) == 'O') || (getM(3, 3) == 'O' && getM(3, 4) == 'O' && getM(3, 5) == 'O') || (getM(0, 0) == 'O' && getM(3, 0) == 'O' && getM(6, 0) == 'O') || (getM(1, 0) == 'O' && getM(3, 1) == 'O' && getM(5, 0) == 'O') || (getM(2, 0) == 'O' && getM(3, 2) == 'O' && getM(4, 0) == 'O') || (getM(0, 1) == 'O' && getM(1, 1) == 'O' && getM(2, 1) == 'O') || (getM(2, 2) == 'O' && getM(3, 3) == 'O' && getM(4, 1) == 'O') || (getM(1, 2) == 'O' && getM(3, 4) == 'O' && getM(5, 1) == 'O') || (getM(0, 2) == 'O' && getM(3, 5) == 'O' && getM(6, 6) == 'O') || (getM(4, 0) == 'O' && getM(5, 0) == 'O' && getM(6, 0) == 'O') || (getM(4, 1) == 'O' && getM(5, 1) == 'O' && getM(6, 1) == 'O'))
			return 0;
		else
			return 1;
	}

};
class Client
{
private:
	SOCKET sock;
	string name;
public:
	Client(SOCKET _sock, string _name) { setSocket(_sock); setName(_name); }
	void setSocket(SOCKET _sock) { sock = _sock; }
	void setName(string _name) { name = _name; }
	SOCKET getSocket() { return sock; }
	string getName() { return name; }
};
string timer()
{
	string str;
	str = "         TIMER         \n";
	str += " --------------------------\n";
	if (seconds > 9)
		str = str + "|          " + to_string(seconds) + "sec          |\n";
	if (seconds < 10)
		str = str + "|          " + to_string(0) + to_string(seconds) + "sec          |\n";
	str += " --------------------------\n";
	Sleep(1000);
	seconds--;
	return str;

}

vector<Client> clients;
vector<thread> threads;
playground1 p1;
playground2 p2;
playground3 p3;

void receiveFrom(Client client) {
	int recv_size, n = 0, k = 0;
	char msg[2000]{};
	if (client.getName() == clients[0].getName()) {
		string str1 = "\nChoose one of the following playgroud\nplayground 1:\n";
		send(clients[0].getSocket(), str1.c_str(), str1.size(), 0);
		send(clients[0].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);

		string str2 = "\nplayground2 :\n";
		send(clients[0].getSocket(), str2.c_str(), str2.size(), 0);
		send(clients[0].getSocket(), p2.playground().c_str(), p2.playground().size(), 0);

		string str3 = "\nplayground3 :\n";
		send(clients[0].getSocket(), str3.c_str(), str3.size(), 0);
		send(clients[0].getSocket(), p3.playground().c_str(), p3.playground().size(), 0);
	}
	if ((recv_size = recv(clients[0].getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
	{
		cout << "recv failed" << endl;
	}
	msg[recv_size] = '\0';
	sscanf_s(msg, "%d", &n);
	if (n == 1)
	{
		while (1) {
			while (seconds >= 0) {
				for (int i = 0; i < clients.size(); i++) {
					send(clients[i].getSocket(), timer().c_str(), timer().size(), 0);
					send(clients[i].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);
				}
				Sleep(1000);
				seconds--;
				if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
				{
					cout << "recv failed" << endl;
					if (client.getSocket() == clients[0].getSocket()) {
						string a = "Player 2 won";
						send(clients[0].getSocket(), a.c_str(), a.size(), 0);
					}
					else
					{
						string b = "Player 1 won";
						send(clients[0].getSocket(), b.c_str(), b.size(), 0);
					}
				}
				msg[recv_size] = '\0';
				sscanf_s(msg, "%d", &k);
				if (k != NULL)
					break;
			}
			seconds = 20;
			/*if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
			{
				cout << "recv failed" << endl;
				if (client.getSocket() == clients[0].getSocket()) {
					string a = "Player 2 won";
					send(clients[0].getSocket(), a.c_str(), a.size(), 0);
				}
				else
				{
					string b = "Player 1 won";
					send(clients[0].getSocket(), b.c_str(), b.size(), 0);
				}
			}
			msg[recv_size] = '\0';
			sscanf_s(msg, "%d", &n);*/
			if (client.getName() == clients[0].getName())
			{
				if (c == 1)
					p1.setX(k);
				c = 2;
			}
			else if (client.getName() != clients[0].getName())
			{
				if (c == 2)
					p1.setO(k);
				c = 1;
			}
			int m = p1.X_ogame();
			if (m == 0) {
				string str5 = "\nPlayer 1 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);
					send(clients[i].getSocket(), str5.c_str(), str5.size(), 0);
				}
				return;
			}
			m = p1.x_Ogame();
			if (m == 0) {
				string str6 = "\nPlayer 2 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);
					send(clients[i].getSocket(), str6.c_str(), str6.size(), 0);
				}
				return;
			}
		}
	}
	else if (n == 2)
	{

		while (1) {
			while (seconds >= 0) {
				for (int i = 0; i < clients.size(); i++) {
					send(clients[i].getSocket(), timer().c_str(), timer().size(), 0);
					send(clients[i].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);
				}
				Sleep(1000);
				seconds--;
				if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
				{
					cout << "recv failed" << endl;
					if (client.getSocket() == clients[0].getSocket()) {
						string a = "Player 2 won";
						send(clients[0].getSocket(), a.c_str(), a.size(), 0);
					}
					else
					{
						string b = "Player 1 won";
						send(clients[0].getSocket(), b.c_str(), b.size(), 0);
					}
				}
				msg[recv_size] = '\0';
				sscanf_s(msg, "%d", &k);
				if (k != NULL)
					break;
			}
			seconds = 20;
			/*if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
			{
				cout << "recv failed" << endl;
				if (client.getSocket() == clients[0].getSocket()) {
					string a = "Player 2 won";
					send(clients[0].getSocket(), a.c_str(), a.size(), 0);
				}
				else
				{
					string b = "Player 1 won";
					send(clients[0].getSocket(), b.c_str(), b.size(), 0);
				}
			}
			msg[recv_size] = '\0';
			sscanf_s(msg, "%d", &n);*/
			if (client.getName() == clients[0].getName())
			{
				if (c == 1)
					p2.setX(k);
				c = 2;
			}
			else if (client.getName() != clients[0].getName())
			{
				if (c == 2)
					p2.setO(k);
				c = 1;
			}
			int m = p2.X_ogame();
			if (m == 0) {
				string str5 = "\nPlayer 1 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p2.playground().c_str(), p2.playground().size(), 0);
					send(clients[i].getSocket(), str5.c_str(), str5.size(), 0);
				}
				return;
			}
			m = p2.x_Ogame();
			if (m == 0) {
				string str6 = "\nPlayer 2 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p2.playground().c_str(), p2.playground().size(), 0);
					send(clients[i].getSocket(), str6.c_str(), str6.size(), 0);
				}
				return;
			}
		}
	}
	else if (n == 3)
	{
		while (1) {
			while (seconds >= 0) {
				for (int i = 0; i < clients.size(); i++) {
					send(clients[i].getSocket(), timer().c_str(), timer().size(), 0);
					send(clients[i].getSocket(), p1.playground().c_str(), p1.playground().size(), 0);
				}
				Sleep(1000);
				seconds--;
				if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
				{
					cout << "recv failed" << endl;
					if (client.getSocket() == clients[0].getSocket()) {
						string a = "Player 2 won";
						send(clients[0].getSocket(), a.c_str(), a.size(), 0);
					}
					else
					{
						string b = "Player 1 won";
						send(clients[0].getSocket(), b.c_str(), b.size(), 0);
					}
				}
				msg[recv_size] = '\0';
				sscanf_s(msg, "%d", &k);
				if (k != NULL)
					break;
			}
			seconds = 20;
			/*if ((recv_size = recv(client.getSocket(), msg, 2000, 0)) == SOCKET_ERROR)
			{
				cout << "recv failed" << endl;
				if (client.getSocket() == clients[0].getSocket()) {
					string a = "Player 2 won";
					send(clients[0].getSocket(), a.c_str(), a.size(), 0);
				}
				else
				{
					string b = "Player 1 won";
					send(clients[0].getSocket(), b.c_str(), b.size(), 0);
				}
			}
			msg[recv_size] = '\0';
			sscanf_s(msg, "%d", &n);*/
			if (client.getName() == clients[0].getName())
			{
				if (c == 1)
					p3.setX(k);
				c = 2;
			}
			else if (client.getName() != clients[0].getName())
			{
				if (c == 2)
					p3.setO(k);
				c = 1;
			}
			int m = p3.X_ogame();
			if (m == 0) {
				string str5 = "\nPlayer 1 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p3.playground().c_str(), p3.playground().size(), 0);
					send(clients[i].getSocket(), str5.c_str(), str5.size(), 0);
				}
				return;
			}
			m = p3.x_Ogame();
			if (m == 0) {
				string str6 = "\nPlayer 2 won\n";
				for (int i = 0; i < clients.size(); i++)
				{
					send(clients[i].getSocket(), p3.playground().c_str(), p3.playground().size(), 0);
					send(clients[i].getSocket(), str6.c_str(), str6.size(), 0);
				}
				return;
			}
		}
	}
}
int main(int argc, char* argv[])
{
	WSADATA wsa;
	SOCKET s, new_socket;
	int c;
	const char* message;

	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	printf("Initialised.\n");

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
	}

	printf("Socket created.\n");

	//Prepare the sockaddr_in structure
	struct sockaddr_in server;
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = INADDR_ANY;
	server.sin_port = htons(1234);

	//Bind
	if (bind(s, (struct sockaddr*)&server, sizeof(server)) == SOCKET_ERROR)
	{
		printf("Bind failed with error code : %d", WSAGetLastError());
	}

	cout << "Bind done" << endl;

	//Listen to incoming connections
	listen(s, 3);

	//Accept and incoming connection
	cout << "Waiting for incoming connections..." << endl;

	struct sockaddr_in client;
	c = sizeof(struct sockaddr_in);
	while (1) {
		new_socket = accept(s, (struct sockaddr*)&client, &c);
		if (new_socket == INVALID_SOCKET)
		{
			printf("accept failed with error code : %d", WSAGetLastError());
		}
		cout << "Connection accepted" << endl;

		char msg[2000];
		int recv_size;
		if ((recv_size = recv(new_socket, msg, 2000, 0)) == SOCKET_ERROR)
		{
			cout << "recv failed" << endl;
		}
		msg[recv_size] = '\0';

		cout << msg << " is connected!!" << endl;

		Client client(new_socket, string(msg));
		timer();
		clients.push_back(client);
		threads.push_back(thread(receiveFrom, client));
	}

	getchar();

	closesocket(s);
	WSACleanup();

	return 0;
}