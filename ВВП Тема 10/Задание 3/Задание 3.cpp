#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число:\n";
    int a;
    cin >> a;
    cout << "Данное число чётное двузначное: ";
    if (a%2==0 and a>9 and a<100)
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}