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

    int min = 1000, max =-1000, mini, maxi;

    for (int i=0; i<n-1; i++)
    {
        if (N[i] > max) {
            max = N[i];
            maxi = i;
        }
        if (N[i] < min) {
            min = N[i];
            mini = i;
        }
    }

    if (mini > maxi)
        swap(mini, maxi);

    for (int i = mini + 1; i < maxi; i++)
        N[i] = 0;

    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}