// 1.17.cpp : Составить программу вывода на экран следующей информации:
// "а) 2  кг        б) a 1        в) x y
//     13 17           19 b          5 y"
// a, b, x и y - переменные велечины целого типа, значения которых
// вводится с клавиатуры и должны быть выведены вместо имён велечин.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0, x = 0, y = 0;
    cout << "Введите четыре любых числа: ";
    cin >> a >> b >> x >> y;
    cout << setw(3) << left << "а)" << setw(10) << "2" << setw(10) << "кг"
        << setw(3) << "б)" << setw(10) << a << setw(10) << "1"
        << setw(3) << "в)" << setw(10) << x << setw(10) << y << endl;
    cout << setw(3) << left << " " << setw(10) << "13" << setw(10) << "17"
        << setw(3) << " " << setw(10) << "19" << setw(10) << b
        << setw(3) << " " << setw(10) << "5" << setw(10) << y << endl;
    return 0;
}