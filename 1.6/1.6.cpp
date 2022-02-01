// 1.6.cpp : Число Pi примерно равно 3,1415926.
// Вывести на экран это число с тремя цифрами в дробной части.
// Текст '3.142' не использовать.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 3.1415926;
	cout << fixed << setprecision(3) << pi << endl;
	return 0;
}