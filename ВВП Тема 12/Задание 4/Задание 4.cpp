#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string num = "" ;
    cout << "Введите число: ";
    cin >> x;
    int xH = x / 100, xD = x / 10 % 10, xO = x % 10;
    
    if      (xH == 1)
        num += "Сто ";
    else if (xH == 2)
        num += "Двести ";
    else if (xH == 3)
        num += "Триста ";
    else if (xH == 4)
        num += "Четыреста ";
    else if (xH == 5)
        num += "Пятьсот ";
    else if (xH == 6)
        num += "Шестьсот ";
    else if (xH == 7)
        num += "Семьсот ";
    else if (xH == 8)
        num += "Восемьсот ";
    else if (xH == 9)
        num += "Девятьсот ";

    if (xD == 1)
    {
        if      (xO == 0)
            num += "десять";
        else if (xO == 1)
            num += "одиннадцать";
        else if (xO == 2)
            num += "двенадцать ";
        else if (xO == 3)
            num += "тринадцать ";
        else if (xO == 4)
            num += "четырнадцать ";
        else if (xO == 5)
            num += "пятнадцать ";
        else if (xO == 6)
            num += "шестнадцать ";
        else if (xO == 7)
            num += "семнадцать ";
        else if (xO == 8)
            num += "восемнадцать ";
        else if (xO == 9)
            num += "девятнадцать ";
    }
    else
    {
        if (xD == 2)
            num += "двадцать ";
        else if (xD == 3)
            num += "тридцать ";
        else if (xD == 4)
            num += "сорок ";
        else if (xD == 5)
            num += "пятьдесят ";
        else if (xD == 6)
            num += "шестьдесят ";
        else if (xD == 7)
            num += "семьдесят ";
        else if (xD == 8)
            num += "восемьдесят ";
        else if (xD == 9)
            num += "девяносто ";

        if (xO == 1)
            num += "один";
        else if (xO == 2)
            num += "два";
        else if (xO == 3)
            num += "три";
        else if (xO == 4)
            num += "четыре";
        else if (xO == 5)
            num += "пять";
        else if (xO == 6)
            num += "шесть";
        else if (xO == 7)
            num += "семь";
        else if (xO == 8)
            num += "восемь";
        else if (xO == 9)
            num += "девять";
    }
    
    cout << num;
}
