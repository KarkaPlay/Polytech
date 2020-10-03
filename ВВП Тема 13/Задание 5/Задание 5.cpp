#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число N: ";
    cin >> n;
    float a;
    cout << "Введите вещественное число A: ";
    cin >> a;

    float sum = 0;
    for (int i = 0; i <= n; i=i+2)
    {
        sum += pow(a, i);
        sum -= pow(a, i + 1);
    }
    cout << "Сумма - " << sum;
}