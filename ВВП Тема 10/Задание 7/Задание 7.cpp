#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны треугольника\n";

    cout << "a: ";
    int a;
    cin >> a;

    cout << "b: ";
    int b;
    cin >> b;

    cout << "c: ";
    int c;
    cin >> c;

    cout << "Существует треугольник со сторонами a, b, c: ";
    if (a + b > c and b + c > a and a + c > b)
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}