#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num = 1;
	int summ = 0;

	cout << "Введите целое число: ";
	cin >> num;

	while (num != 0) 
	{
		summ += num % 10;
		num /= 10;
	}
	cout << "сумма цифр: " << summ;
}