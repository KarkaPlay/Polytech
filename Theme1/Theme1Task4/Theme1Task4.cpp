#include <iostream>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два ненулевых числа: " << endl;
    float a, b;
    cin >> a >> b;
    a = a * a;
    b = b * b;
    cout << "Сумма их квадратов - " << a + b << endl;
    cout << "Разность их квадратов - " << a - b << endl;
    cout << "Произведение их квадратов - " << a * b << endl;
    cout << "Частное их квадратов - " << a / b;
}