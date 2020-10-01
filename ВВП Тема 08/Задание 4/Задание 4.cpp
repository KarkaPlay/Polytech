#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите двухзначное число: ";
	int a;
	cin >> a;

	a = (a % 10 * 10) + a / 10;
	cout << a;
}