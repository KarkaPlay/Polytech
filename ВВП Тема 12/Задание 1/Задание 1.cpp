#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int day, month;
    cout << "Введите номер дня: ";
    cin >> day;
   // cout << "Введите номер месяца: ";
   // cin >> month;
    
    string date = "";
    if (day > 19 or day < 11) {
        if (day == 10)
            date += "десятое";

        if (day == 20)
            date += "двадцатое";

        else if (day > 20 and day < 30)
            date += "двадцать ";

        else
        {
            if (day == 30)
                date += "тридцатое";
            else if (day > 29)
                date += "тридцать ";
        }

        int dayL = day % 10;

        if (dayL == 1)
            date += "первое";
        else if (dayL == 2)
            date += "второе";
        else if (dayL == 3)
            date += "третье";
        else if (dayL == 4)
            date += "четвёртое";
        else if (dayL == 5)
            date += "пятое";
        else if (dayL == 6)
            date += "шестое";
        else if (dayL == 7)
            date += "седьмое";
        else if (dayL == 8)
            date += "восьмое";
        else if (dayL == 9)
            date += "девятое";
    }
    else
    {
        if (day == 11)
            date += "один";
        else if (day == 12)
            date += "две";
        else if (day == 13)
            date += "три";
        else if (day == 14)
            date += "четыр";
        else if (day == 15)
            date += "пят";
        else if (day == 16)
            date += "шест";
        else if (day == 17)
            date += "сем";
        else if (day == 18)
            date += "восем";
        else if (day == 19)
            date += "девят";
        date += "надцатое";
    }
    cout << date;
}