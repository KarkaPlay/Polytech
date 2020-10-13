#include <iostream>
using namespace std;

float PowerA3(float a, float b)
{
    b = a * a * a;
    return b;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число:\n";
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        cout << a << "^3 = " << PowerA3(a, 0) << endl;
    }
}