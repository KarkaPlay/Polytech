#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите угол в градусах: ";
    int a;
    cin >> a;
    float rad = (float)a / 180;
    cout << a << "° = " << rad << " * Pi радиан ";
}