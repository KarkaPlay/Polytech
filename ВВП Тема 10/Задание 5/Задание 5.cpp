#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите четырёхзначное число:\n";
    int a;
    cin >> a;
    cout << "Данное число читается одинаково слева направо и справа налево: ";
    if (a/1000 == a%10 and a/100%10 == a%100/10)
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}