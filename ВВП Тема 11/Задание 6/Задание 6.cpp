#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число: ";
    int x;
    cin >> x;
    string d = "";

    if (x % 2 == 0)
        d += "Чётное ";
    else
        d += "Нечётное ";

    if (x > 0 and x < 10)
        d += "однозначное ";
    else if (x > 9 and x < 100)
        d += "двузначное ";
    else
        d += "трёхзначное ";

    d += "число";

    cout << d;

}