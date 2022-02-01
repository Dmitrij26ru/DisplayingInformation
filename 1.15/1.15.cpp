// 1.15.cpp : Составить программу вывода на экран в одну строку четырёх любых чисел,
// вводимых с клавиатуры, с одним пробелом между ними.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0, c = 0, d = 0;
    cout << "Введите четыре любых числа: ";
    cin >> a >> b >> c >> d;
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}