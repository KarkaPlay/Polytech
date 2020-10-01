#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите трехзначное число: ";
	int a;
	cin >> a;

	a = a/100 + a%100*10;
	cout << a;
}