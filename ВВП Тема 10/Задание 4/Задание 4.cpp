#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите трёхзначное число:\n";
    int a;
    cin >> a;
    cout << "Цифры данного числа образуют возрастающую или убывающую последовательность: ";
    if ((a/100 < a/10%10 and a/10%10 < a%10) or (a/100 > a/10%10 and a/10%10 > a%10))
        cout << "Высказывание истинно";
    else
        cout << "Высказывание ложно";
}