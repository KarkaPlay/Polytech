#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n, indexOfMax, indexOfMin;
    cin >> n;
    int* N = new int[n];

    int min = 9999, max = -9999;
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
        if (N[i] > max)
        {
            max = N[i];
            indexOfMax = i;
        }
        if (N[i] < min)
        {
            min = N[i];
            indexOfMin = i;
        }
    }
    for (int i=n; i > indexOfMin; i--)
        N[i] = N[i - 1];
    N[indexOfMin] = 0;

    for (int i = n; i > indexOfMax; i--)
        N[i+1] = N[i];
    N[indexOfMax + 1] = 0;

    n += 2;

    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}