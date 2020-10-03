#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string num = "";
    cout << "Введите число: ";
    cin >> x;

    if (x < 20)      // 10-19
    {
        if (x == 10)
            num += "десять ";      // учебных пособий
        else if (x == 11)          //
            num += "одиннадцать "; //
        else if (x == 12)          //
            num += "двенадцать ";  //
        else if (x == 13)          //
            num += "тринадцать ";  //
        else if (x == 14)          //
            num += "четырнадцать ";//
        else if (x == 15)          //
            num += "пятнадцать ";  //
        else if (x == 16)          //
            num += "шестнадцать "; //
        else if (x == 17)          //
            num += "семнадцать ";  //
        else if (x == 18)          //
            num += "восемнадцать ";//
        else if (x == 19)          //
            num += "девятнадцать ";// учебных пособий
    }
    else if (x < 30)     // 20-29
        num += "двадцать ";
    else if (x < 40)     // 30-39
        num += "тридцать ";
    else if (x == 40)    // 40
        num += "сорок ";

    int xd = x % 10;
    if (x % 10 != 0 and x > 19)  // 21-29, 31-39
    {
        if (xd == 1)
            num += "одно ";  // учебное пособие
        else if (xd == 2)    // учебных пособия
            num += "два ";   //
        else if (xd == 3)    //
            num += "три ";   //
        else if (xd == 4)    // учебных пособия
            num += "четыре ";
        else if (xd == 5)    // учебных пособий
            num += "пять ";  //
        else if (xd == 6)    //
            num += "шесть "; //
        else if (xd == 7)    //
            num += "семь ";  //
        else if (xd == 8)    //
            num += "восемь ";//
        else if (xd == 9)    // учебных пособий
            num += "девять ";
    }

    if (x > 19 and xd == 1)       // 21, 31
        num += "учебное пособие";
    else
    {
        num += "учебных ";
        if (xd < 5 and xd != 0 and x > 19)  // 22-24, 32-34
            num += "пособия";
        else                     // 25-30, 35-40
            num += "пособий";
    }

    cout << num;
}