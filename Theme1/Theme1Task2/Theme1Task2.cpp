#include <iostream>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите диаметр окружности: " << endl;
    int d;
    cin >> d;
    float L = 3.14 * d;
    cout << "Длина окружности - " << L;
}