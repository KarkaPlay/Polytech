#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* N = new int[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++)
        cin >> N[i];

    int locMax = -1;
    for (int i = 0; i < n; i++)
    {
        if (N[i-2] < N[i-1] and N[i-1] > N[i])
            locMax = i-1;
    }
    if (N[n-1] > N[n-2])    // Частный случай, если последний элемент - локальный максимум
        locMax = N[n-1];
    if (locMax == -1)
        cout << "Локального максимума нет";
    else
        cout << "Номер последнего локального максимума - " << locMax;
}