#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float s;
    cout << "Введите цену 1 кг конфет: ";
    cin >> s;
    for (float i = 0.1; i < 1.1; i = i + 0.1) 
    {
        cout << i << " кг - " << s * i * 10 << endl;
    }
}