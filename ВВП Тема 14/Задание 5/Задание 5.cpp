#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два целых положительных числа:\n";
    int a, b;
    cin >> a >> b;

    while (a != 0 and b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    cout << "НОД: " << a + b;
}
