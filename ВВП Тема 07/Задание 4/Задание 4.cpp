#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите скорость первой машины: ";
    int v1;
    cin >> v1;

    cout << "Введите скорость второй машины: ";
    int v2;
    cin >> v2;

    cout << "Введите расстояние между ними: ";
    int s;
    cin >> s;

    cout << "Введите время: ";
    int t;
    cin >> t;

    int s2 = s + t * (v1 + v2);
    cout << "Между машинами будет " << s2 << " км";
}
