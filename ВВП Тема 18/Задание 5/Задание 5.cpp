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
    int a = N[0];
    for (int i = 1; i < n; i++)
    {
        if (N[i-1] > N[i])
        {
            a = N[i-1];
            N[i-1] = N[i];
            N[i] = a;
        }
    }
    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}