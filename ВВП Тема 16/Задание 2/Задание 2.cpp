#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n;
    cin >> n;

    cout << "Введите первый член прогрессии: ";
    int a;
    cin >> a;

    cout << "Введите знаменатель прогрессии: ";
    int d;
    cin >> d;

    int* N = new int[n];
    N[0] = a;
    cout << N[0] << " ";

    for (int i = 1; i < n; i++)
    {

        N[i] = a * pow(d,i);
        cout << N[i] << " ";
    }
}