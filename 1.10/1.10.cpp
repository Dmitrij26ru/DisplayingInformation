// 1.10.cpp : Составить программу, которая запрашивает имя человека и повторяет его на экране.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string name;
	cout << "Введите имя:" << endl;
	SetConsoleCP(1251);
	getline(cin, name);
	SetConsoleCP(866);
	cout << name << endl;
	return 0;
}