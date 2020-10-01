#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер года: ";
    int year;
    cin >> year;
    cout << "Это " << (year-1) / 100 + 1 << "-е столетие";
}