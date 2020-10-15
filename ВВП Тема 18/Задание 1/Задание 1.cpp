#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массивов: ";
    int n;
    cin >> n;
    int* A = new int[n];
    int* B = new int[n];

    cout << "Введите элементы массива A: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Введите элементы массива B: ";
    for (int i = 0; i < n; i++)
        cin >> B[i];

    for (int i = 0; i < n; i++)
        swap(A[i], B[i]);

    cout << "Массив A: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << "\nМассив B: ";
    for (int i = 0; i < n; i++)
        cout << B[i] << " ";
}