#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n, numOfPos = 0;
    cin >> n;
    float* N = new float[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
        if (N[i] > 0)
            numOfPos++;
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        if (N[i] > 0) 
        {
            n++;
            for (int j = n - 1; j > i; j--) N[j] = N[j - 1];
                N[i] = 0;
        }
    }

    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}