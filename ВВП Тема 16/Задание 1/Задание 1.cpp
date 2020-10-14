#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите целое положительное число:\n";
    int n;
    cin >> n;
    int* N = new int[n];

    for (int i = 0; i < n; i++)
    {
        N[i] = 2 * i + 1;
        cout << N[i]  << " ";
    }
}