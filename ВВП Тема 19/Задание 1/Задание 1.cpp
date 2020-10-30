#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int n1 = n;
    int* N = new int[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
        cin >> N[i];

    for (int i = 0; i < n1; i++)
    {
        if (N[i] == N[i+1])
        {
            n1--;
            for (int j = i+1; j < n; j++)
            {
                swap(N[j], N[j + 1]);
            }
            i--;
        }
    }

    int* A = new int[n1];

    for (int j = 0; j < n1; j++)
        A[j] = N[j];

    cout << "Новый массив: ";
    for (int i = 0; i < n1; i++)
        cout << A[i] << " ";
}