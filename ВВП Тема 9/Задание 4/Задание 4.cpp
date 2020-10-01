#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны прямоугольника:\n";
    int a, b;
    cin >> a >> b;

    cout << "Введите сторону квадрата: ";
    int c;
    cin >> c;

    int k = a / c * b / c;
    cout << "В прямоугольник помещается " << k << " квадратов\n";
    cout << "Незанятая площадь - " << a*b - k*c*c;
}
