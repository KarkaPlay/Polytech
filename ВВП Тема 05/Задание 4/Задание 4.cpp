#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите координаты одной из вершин прямоугольника\n";
	int x1, y1;
	cout << "x = ";
	cin >> x1;
	cout << "y = ";
	cin >> y1;

	cout << "Введите координаты противоположной вершины\n";
	int x2, y2;
	cout << "x = ";
	cin >> x2;
	cout << "y = ";
	cin >> y2;

	int a = abs(x1 - x2);
	int b = abs(y1 - y2);

	int P = 2 * (a + b);
	int S = a * b;

	cout << "P = " << P << endl << "S = " << S;
}
