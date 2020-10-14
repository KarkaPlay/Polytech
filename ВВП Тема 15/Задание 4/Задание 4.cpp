#include <iostream>
using namespace std;

float x, y;

int Quarter(float x, float y)
{
    if (x > 0 and y > 0)
        return 1;
    else if (x < 0 and y>0)
        return 2;
    else if (x < 0 and y < 0)
        return 3;
    else if (x > 0 and y < 0)
        return 4;
    else
    {
        cout << "Неверные координаты\n";
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 3; i++)
    {
        cout << "Введите координаты\nx:";
        cin >> x;
        cout << "y:";
        cin >> y;
        if (Quarter(x, y) != 0) {
            cout << "Это " << Quarter(x, y) << "-я четверть\n";
        }
    }
}