// 1.7.cpp : Число e (основание натурального логарифма) приблизительно равно 2,71828.
// Вывести на экран это число с точностью до десятых.
// Текст '2.7' не использовать.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double e = 2.71828;
	cout << fixed << setprecision(1) << e << endl;
	return 0;
}