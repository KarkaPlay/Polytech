#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "X кг конфет стоит A рублей\n" << "Введите X: ";
    float x, a;
    cin >> x;
    cout << "Введите A: ";
    cin >> a;
    float for1kg = a/x;
    cout << "1 кг стоит " << for1kg << " рублей\n";
    cout << "Рассчёт стоимости Y кг этих же конфет\nВведите Y: ";
    int y;
    cin >> y;
    float price = for1kg * y;
    cout << y << " кг этих же конфет стоит " << price << " рублей";
}