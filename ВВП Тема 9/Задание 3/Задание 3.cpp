#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите K: ";
    int k;
    cin >> k;
    cout << "Введите N: ";
    int n;
    cin >> n;
    cout << "Номер дня недели - " << (k+n-2) % 7 + 1;
}
