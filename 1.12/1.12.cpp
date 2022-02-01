// 1.12.cpp : Напишите программу, в которой вводится имя человека и выводится на экран
// приветствие в виде слова "Привет", после которого должна стоять запятая,
// введённое имя и восклицательный знак.
// После запятой должен стоять пробел, а перед восклицательным знаком пробела быть не должно.
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
	cout << "Привет " << name << "!" << endl;
	return 0;
}