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

    int min = 1000;
    for (int i = 0; i < n; i += 2)
        if (N[i] < min)
            min = N[i];
    cout << "Минимальный элемент - " << min;
}