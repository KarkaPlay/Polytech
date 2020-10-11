#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два положительных числа:\n";
    float a, b;
    cin >> a >> b;

    while (a >= b) 
        a -= b;
    cout << "Незанято " << a;
}
