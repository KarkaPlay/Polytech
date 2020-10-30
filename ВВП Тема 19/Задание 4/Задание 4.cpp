#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n, numOfNegative=0;
    cin >> n;
    float* N = new float[n];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
        if (N[i] < 0)
            numOfNegative++;
    }

    for (int i = 0; i < n; i++) 
    {
        if (N[i] < 0)
        {
            for (int j = n; j > i; j--)
                N[j + 1] = N[j];
            N[i + 1] = 0;
        }
    }
    
    n += numOfNegative;

    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}