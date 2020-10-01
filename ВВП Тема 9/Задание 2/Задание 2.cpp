#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите K: ";
    int k;
    cin >> k;
    cout << "Номер дня недели - " << k % 7;
}
