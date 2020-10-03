#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число: ";
    int x;
    cin >> x;
    string d = "";
    if (x == 0)
        d += "Нулевое ";
    else
    {
        if (x > 0)
            d += "Положительное ";
        else
            d += "Отрицательное ";

        if (x % 2 == 0)
            d += "чётное ";
        else
            d += "нечётное ";
    }

    d += "число";

    cout << "x - " << d;
}