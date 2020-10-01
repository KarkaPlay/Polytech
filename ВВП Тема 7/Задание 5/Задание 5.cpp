#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "A*x + B = 0\n" << "Введите A: ";
    int a;
    cin >> a;
   
    cout << "Введите B: ";
    int b;
    cin >> b;

    float x = (float)(-b / a);
    cout << "X = " << x;
}