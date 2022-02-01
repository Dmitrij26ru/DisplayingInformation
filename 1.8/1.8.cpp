// 1.8.cpp : Составить программу вывода на экран числа, вводимого с клавиатуры.
// Выводимому числу должно предшествовать сообщение "Вы ввели число".
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите любое целое число:" << endl;
	int number = 0;
	cin>>number;
	cout << "Вы ввели число " <<  number << endl;
	return 0;
}