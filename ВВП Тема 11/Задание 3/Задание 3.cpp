#include <iostream>
using namespace std;

int Ax, Ay, Bx, By, Cx, Cy;

float Length(int dotX, int dotY)
{
    float LengthX = abs(Ax - dotX);
    float LengthY = abs(Ay - dotY);
    return sqrt(LengthX*LengthX + LengthY*LengthY);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты трёх точек: \n";

    cout << "A x: ";
    cin >> Ax;
    cout << "A y: ";
    cin >> Ay;

    cout << "\nB x: ";
    cin >> Bx;
    cout << "B y: ";
    cin >> By;

    cout << "\nC x: ";
    cin >> Cx;
    cout << "C y: ";
    cin >> Cy;

    if (Length(Bx, By) > Length(Cx, Cy))
        cout << "Ближайшая точка - C\nРасстояние - " << Length(Cx, Cy);
    else if (Length(Bx, By) < Length(Cx, Cy))
        cout << "Ближайшая точка - B\nРасстояние - " << Length(Bx, By);
    else
        cout << "Точки на одинаковом расстоянии - " << Length(Cx, Cy);
}