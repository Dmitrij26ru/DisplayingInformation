// 1.9.cpp : Составить программу вывода на экран числа, вводимого с клавиатуры.
// После выводимого числа должно следовать сообщение " - вот такое число Вы ввели".
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите любое целое число:" << endl;
	int number = 0;
	cin >> number;
	cout <<  number << " - вот такое число Вы ввели" << endl;
	return 0;
}