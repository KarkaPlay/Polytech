#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите A, B и C:\n";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "A < B < C: ";
    if (a < b and b < c)
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}