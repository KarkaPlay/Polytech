#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите координаты одной из вершин треугольника\n";
	int xA, yA;
	cout << "x = ";
	cin >> xA;
	cout << "y = ";
	cin >> yA;

	cout << "Введите координаты другой вершины\n";
	int xB, yB;
	cout << "x = ";
	cin >> xB;
	cout << "y = ";
	cin >> yB;

	cout << "Введите координаты третьей вершины\n";
	int xC, yC;
	cout << "x = ";
	cin >> xC;
	cout << "y = ";
	cin >> yC;

	float AB = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
	float AC = sqrt(pow(xA - xC, 2) + pow(yA - yC, 2));
	float BC = sqrt(pow(xB - xC, 2) + pow(yB - yC, 2));


	float P = AB + AC + BC;
	float p = P / 2;
	float S = sqrt(p * (p - AB) * (p - AC) * (p - BC));

	cout << "P = " << P << endl << "S = " << S;
}
