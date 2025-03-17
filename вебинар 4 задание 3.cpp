#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num = 0;

	cout << "Введите целое число: ";
	cin >> num;

	for (int i = 1; i <= 10; i++)
	{
		cout << num << " x " << i << " = " << num * i<< endl;

	}
}