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

    bool a = true;
    for (int i = 2; i < n; i++)
        if (N[i] - N[i-1] != N[i-1] - N[i-2])
            a = false;

    if (a == true)
        cout << "Массив содержит арифметическую прогрессию";
    else
        cout << "Массив не содержит арифметическую прогрессию";
}