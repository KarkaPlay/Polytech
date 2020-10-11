#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите целое число N>1: ";
    int n;
    cin >> n;

    int s = 0, k=0;
    while (s < n)
    {
        k++;
        s += k;
    }
    cout << k;
}
