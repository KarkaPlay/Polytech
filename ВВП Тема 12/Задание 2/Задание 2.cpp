#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, dir = 1;  // 1-Север  2-Запад  3-Юг  4-Восток
    cout << "Начальное направление: Север\n";
    cout << "Введите команду: ";
    cin >> n;

    if (n == 1) {
        if (dir == 4)
            dir = 0;
        else
            dir++;
    }

    else if (n == -1)
    {
        if (dir == 1)
            dir = 4;
        else
            dir--;
    }
   
    cout << "Направление после выполнения команды: ";
    if (dir == 1)
        cout << "Север";
    else if (dir == 2)
        cout << "Запад";
    else if (dir == 3)
        cout << "Юг";
    else
        cout << "Восток";
    
}