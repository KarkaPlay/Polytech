#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* N = new int[n];

    cout << "Введите первое и второе числа массива:\n";
    int a, b;
    cin >> a >> b;

    N[0] = a;
    N[1] = b;
    int sum = a + b;
    cout << N[0] << " " << N[1] << " ";

    for (int i = 2; i < n; i++)
    {
        N[i] = sum;
        sum += N[i];
        cout << N[i] << " ";
    }
}