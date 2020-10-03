#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите три числа: \n";
    int a, b, c, sum;
    cin >> a >> b >> c;
    
    if (a < b)
    {
        if (a < c) // a - наименьшее
            sum = b + c;
        else       // c - наименьшее
            sum = b + a;
    }
    else // b < a
    {
        if (b < c) //  b - наименьшее
            sum = a + c;
        else       // c - наименьшее
            sum = a + b;
    }
    cout << "Сумма двух наибольших - " << sum;
}