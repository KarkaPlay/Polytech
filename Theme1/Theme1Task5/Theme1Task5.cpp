#include <iostream>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два ненулевых числа: " << endl;
    float a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << "Сумма их модулей - " << a + b << endl;
    cout << "Разность их модулей - " << a - b << endl;
    cout << "Произведение их модулей - " << a * b << endl;
    cout << "Частное их модулей - " << a / b;
}