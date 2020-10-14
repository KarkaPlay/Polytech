#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива:\n";
    int n;
    cin >> n;
    int* A = new int[n];

    cout << "Введите элементы массива: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = n-1; i > n/2; i--)
    {
        cout << A[abs(i-n+1)] << " ";
        cout << A[i] << " ";
    }
    if (n % 2 != 0)
        cout << A[n/2] << " ";
    else
        cout << A[(n/2)-1] << " " << A[n/2];
}