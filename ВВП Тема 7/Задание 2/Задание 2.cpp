#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите угол в радианах (без Pi): ";
    float rad;
    cin >> rad;
    float a = rad * 180;
    cout << rad << " * Pi = " << a << "°";
}