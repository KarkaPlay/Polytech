#include <iostream>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны прямоугольника: " << endl;
    int a, b;
    cin >> a >> b;
    int S = a * b;
    cout << "Площадь прямоугольника - " << S << endl;
    int P = 2 * (a + b);
    cout << "Периметр прямоугольника - " << P;
}