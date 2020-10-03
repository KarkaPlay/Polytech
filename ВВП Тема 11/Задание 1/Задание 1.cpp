#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите переменные A и B: \n";
    int a, b;
    cin >> a >> b;
    if (a != b)
    {
        if (a > b)
            b = a;
        else
            a = b;
    }
    else
    {
        a = b = 0;
    }
    cout << "A = " << a << "\nB = " << b;
}