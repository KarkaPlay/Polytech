#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер файла в байтах: ";
    int i;
    cin >> i;
    cout << "Размер файла в килобайтах - " << (float)i / 1024 << " Кб";
}