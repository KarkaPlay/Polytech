#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите целое число N: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= 2*n-1; i=i+2)
    {
        s += i;
        cout << endl << s;
    }
    cout << "\nN^2 = " << s;
}