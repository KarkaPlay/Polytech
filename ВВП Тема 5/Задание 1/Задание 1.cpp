#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите координаты первой точки\n";
	int x1, y1;
	cout << "x = ";
	cin >> x1;
	cout << "y = ";
	cin >> y1;

	cout << "Введите координаты второй точки\n";
	int x2, y2;
	cout << "x = ";
	cin >> x2;
	cout << "y = ";
	cin >> y2;

	float length = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	cout << "Расстояние между точками - " << length;
}
