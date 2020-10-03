#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты точки: \n";
    int x, y;

    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    if      (x > 0 and y > 0)
        cout << "1-я четверть";
    else if (x < 0 and y > 0)
        cout << "2-я четверть";
    else if (x < 0 and y < 0)
        cout << "3-я четверть";
    else
        cout << "4-я четверть";
}