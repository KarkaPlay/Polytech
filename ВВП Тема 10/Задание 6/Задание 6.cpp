#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны треугольника\n";

    cout << "a: ";
    int a;
    cin >> a;
    a = a * a;

    cout << "b: ";
    int b;
    cin >> b;
    b = b * b;

    cout << "c: ";
    int c;
    cin >> c;
    c = c * c;

    cout << "Треугольник со сторонами a, b, c является прямоугольным: ";
    if (a+b==c or b+c==a or a+c==b)
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}