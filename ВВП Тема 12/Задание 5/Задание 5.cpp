#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string year = "";
    cout << "Введите год: ";
    cin >> x;
    x = x - 1984;

    if (x / 12 == 0)
        year += "зелен";
    else if (x / 12 == 1)
        year += "красн";
    else if (x / 12 == 2)
        year += "желт";
    else if (x / 12 == 2)
        year += "бел";
    else if (x / 12 == 2)
        year += "черн";

    if (x % 12 == 0)
        year += "ой крысы";
    else if (x % 12 == 1)
        year += "ой коровы";
    else if (x % 12 == 2)
        year += "ого тигра";
    else if (x % 12 == 3)
        year += "ого зайца";
    else if (x % 12 == 4)
        year += "ого дракона";
    else if (x % 12 == 5)
        year += "ой змеи";
    else if (x % 12 == 6)
        year += "ой лошади";
    else if (x % 12 == 7)
        year += "ой овцы";
    else if (x % 12 == 8)
        year += "ой обезьяны";
    else if (x % 12 == 9)
        year += "ой курицы";
    else if (x % 12 == 10)
        year += "ой собаки";
    else if (x % 12 == 11)
        year += "ой свиньи";

    cout << "Год " << year;
}