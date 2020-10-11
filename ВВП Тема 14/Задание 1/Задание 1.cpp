#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два целых положительных числа:\n";
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        for (int j = 0; j < i; j++)
            cout << i << endl;
}
