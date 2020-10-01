#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Система" << "\nA1*x + B1*y = C1 \nA2*x + B2*y = C2\n";

    cout << "Введите A1: ";
    int a1;
    cin >> a1;

    cout << "Введите B1: ";
    int b1;
    cin >> b1;

    cout << "Введите C1: ";
    int c1;
    cin >> c1;

    cout << "Введите A2: ";
    int a2;
    cin >> a2;

    cout << "Введите B2: ";
    int b2;
    cin >> b2;

    cout << "Введите C2: ";
    int c2;
    cin >> c2;

    float D = (float)a1 * b2 - b1 * a2;
    float D1 = (float)c1 * b2 - b1 * c2;
    float D2 = (float)a1 * c2 - c1 * a2;
    float x = D1 / D;
    float y = D2 / D;
    cout << "x = " << x << "\ny = " << y;
}