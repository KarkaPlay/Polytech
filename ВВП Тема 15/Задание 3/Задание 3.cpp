#include <iostream>
using namespace std;

const double PI = acos(-1.0);
float r1, r2;

float RingS(float r1, float r2)
{
    return (PI*pow(r1,2) - PI * pow(r2, 2));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите R1: ";
    cin >> r1;
    cout << "Введите R2: ";
    cin >> r2;
    cout << "Площадь кольца = " << RingS(r1, r2);
}