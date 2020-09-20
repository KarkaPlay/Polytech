#include <iostream>
using namespace std;

int main()
{
    cout << "Введите стороны прямоугольника: " << endl;
    int a, b;
    cin >> a >> b;
    int S = a * b;
    cout << "Площадь прямоугольника - " << S;
    int P = 2 * (a + b);
    cout << "Периметр прямоугольника - " << P;
}