#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int summ{ 0 };
    int num{ 0 };

    do
    {
        cout << "Введите целое число или число '0', чтобы закончить: ";
        cin >> num;
        summ += num;

    } while (num != 0);
    cout << "сумма: " << summ;
}