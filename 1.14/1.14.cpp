// 1.14.cpp : Составить программу вывода на экран в одну строку трёх любых чисел,
// вводимых с клавиатуры, с двумя пробелами между ними.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0, c = 0;
    cout << "Введите три любых числа: ";
    cin >> a >> b >> c;
    cout << a << "  " << b << "  " << c << endl;
    return 0;
}