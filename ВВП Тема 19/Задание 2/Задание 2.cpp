#include <iostream>
using namespace std;

void del(int* arr, int& length, int index)  // Функция удаляет элемент массива по индексу и уменьшает его длину
{
    for (int i = index + 1; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }
    length--;
}

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

    for (int i = 0; i < n; i++)
    {
        int digit = N[i];  // Теукщее число
        int digitCount = 0;  // Счетчик
        for (int j = 0; j < n; j++)   //
            if (digit == N[j])        //  Считаем, сколько раз встречается текущее число
                digitCount++;         //
        if (digitCount == 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (N[j] == digit)
                {
                    del(N, n, j);
                    j--;
                }
            }
        }
    }

    cout << "Новый массив: ";
    for (int i = 0; i < n; i++)
        cout << N[i] << " ";
}