#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* A = new int[n];

    cout << "Введите элементы массива A: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    float* B = new float[n];
    int sum = 0;
    cout << "Массив B: ";
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        B[i] = (float)sum / (i + 1);
        cout << B[i] << " ";
    }
}