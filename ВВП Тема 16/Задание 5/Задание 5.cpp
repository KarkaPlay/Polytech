#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* A = new int[n];

    cout << "Введите элементы массива: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i < n; i+=2)
        cout << A[i] << " ";
    cout << "| ";
    for (int i = ((n-1)/2)*2; i >= 0; i -= 2)
        cout << A[i] << " ";
}