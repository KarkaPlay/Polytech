#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число N: ";
    cin >> n;
    float a = 1;
    for (int i = 0; i < n; i++)
    {
        float k = 1.1;
        a *= k;
        k = k + .1;
    }
    cout << a;
}