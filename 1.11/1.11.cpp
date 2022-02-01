// 1.11.cpp : Составить программу, которая запрашивает название футбольной команды
// и повторяет его на экране со словами " - это чемпион!".
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string team;
	cout << "Введите название команды:" << endl;
	SetConsoleCP(1251);
	getline(cin, team);
	SetConsoleCP(866);
	cout << team << " - это чемпион!" << endl;
	return 0;
}