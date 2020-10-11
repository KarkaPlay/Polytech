#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите P: ";
    float p, s = 1000;
    int k=0;
    cin >> p;
    p /= 100; // переводим проценты в доли

    while (s <= 1100)
    {
        s += s * p;
        k++;
    }
    cout << "Количество месяцев - " << k;
    cout << "\nИтоговый размер вклада - " << s;
}
