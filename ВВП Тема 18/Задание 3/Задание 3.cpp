#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* N = new int[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
        cin >> N[i];

    int odd=2;
    for (int i = 0; i < n; i++)
        if (N[i] % 2 != 0)
            odd = N[i];
    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
    {
        if (odd != 2)
            if (N[i]%2 != 0)
                N[i] += odd;
        cout << N[i] << " ";
    }
}