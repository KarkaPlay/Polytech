#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число А: ";
    int a;
    cin >> a;
    int t = a * a;
    a = t * t;
    a = a * a;
    cout << "A^8 = " << a;
}
