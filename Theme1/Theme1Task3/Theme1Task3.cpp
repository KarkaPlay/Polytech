#include <iostream>;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите два числа: " << endl;
    float a, b;
    cin >> a >> b;
    float avg = (a+b)/2;
    cout << "Их среднее арифметическое - " << avg;
}