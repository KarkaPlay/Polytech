#include <iostream>
using namespace std;

const double PI = acos(-1.0);
float r1, r2;

float RingS(float r1, float r2)
{
    cout << "Введите R1: ";
    cin >> r1;
    cout << "Введите R2: ";
    cin >> r2;
    return abs(PI*r1*r1 - PI * r2*r2);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "Площадь первого кольца = " << RingS(r1, r2) << endl;
    cout << "Площадь второго кольца = " << RingS(r1, r2) << endl;
    cout << "Площадь третьего кольца = " << RingS(r1, r2);
}