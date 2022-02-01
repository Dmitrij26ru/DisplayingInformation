// 1.16.cpp : Составить программу вывода на экран следующей информации:
// "а) 5 10        б) 100 t        в) x 25
//     7 см           1949 v          x y"
// t, v, x и y - переменные велечины целого типа, значения которых
// вводится с клавиатуры и должны быть выведены вместо имён велечин.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int t = 0, v = 0, x = 0, y = 0;
    cout << "Введите четыре любых числа: ";
    cin >> t >> v >> x >> y;
    cout << setw(3) << left << "а)" << setw(10) << "5" << setw(10) << "10"
        << setw(3) << "б)" << setw(10) << "100" << setw(10) << t
        << setw(3) << "в)" << setw(10) << x << setw(10) << "25" << endl;
    cout << setw(3) << left << " " << setw(10) << "7" << setw(10) << "см"
        << setw(3) << " " << setw(10) << "1949" << setw(10) << v
        << setw(3) << " " << setw(10) << x << setw(10) << y << endl;
    return 0;
}