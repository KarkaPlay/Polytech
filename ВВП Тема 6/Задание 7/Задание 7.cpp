#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число А: ";
    int a;
    cin >> a;
    int t = a * a; // t = a^2
    int v = t * a; // v = a^3
    t = v * t;     // t = a^5
    v = t * t;     // v = a^10
    a = v * t;     // a = a^15
    cout << "A^15 = " << a;
}
