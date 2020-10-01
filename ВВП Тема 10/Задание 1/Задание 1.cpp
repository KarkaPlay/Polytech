#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите A и B:\n";
    int a, b;
    cin >> a >> b;
    cout << "A > 2 и B <= 3: ";
    if (a > 2 and b <= 3) 
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}