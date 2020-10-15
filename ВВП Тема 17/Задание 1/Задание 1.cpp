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

    cout << "Введите два числа:\n";
    int k, l;
    cin >> k >> l;

    float avg = 0;
    for (int i = k; i <= l; i++)
    {
        avg += N[i];
    }
    avg /= (l - k + 1);

    cout << "Среднее арифметическое чисел с номерами от " << k << " до " << l << " - " << avg;
}
