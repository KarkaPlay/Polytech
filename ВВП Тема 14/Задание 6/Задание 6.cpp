#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число Фибоначчи:\n";
    int n, k=3, f0=1, f1=1, f2=2;
    cin >> n;

    while (f2 != n)
    {
        f0 = f1;
        f1 = f2;
        f2 = f0 + f1;
        k++;
    }
    cout << "Его порядковый номер - " << k << " (Если ряд начинается с 1)";
}
