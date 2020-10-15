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

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (N[i] == N[j])
                cout << "Номера равных элементов - " << i << " и " << j;
}