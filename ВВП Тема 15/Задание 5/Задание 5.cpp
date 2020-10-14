#include <iostream>
using namespace std;

int n;

float Fact2(int n)
{
    int i;
    float fac=1;
    if (n % 2 == 0)
        i = 2;
    else
        i = 1;

    while (i <= n)
    {
        fac *= i;
        i += 2;
    }
    return fac;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число:\n";
    cin >> n;
    cout << "N!! = " << Fact2(n);
}