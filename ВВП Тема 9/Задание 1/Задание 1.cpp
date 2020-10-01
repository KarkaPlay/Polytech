#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите сколько секунд прошло с начала суток: ";
    int sec;
    cin >> sec;
    cout << "С начала последней минуты прошло " << sec % 60 << " секунд";
}
