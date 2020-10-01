#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите длину отрезка A: ";
	int a;
	cin >> a;

	cout << "Введите длину отрезка B: ";
	int b;
	cin >> b;

	cout << "В отрезок A помещается " << a / b << " отрезков B";
}