#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите координаты точки A\n";
	int Ax, Ay;
	cout << "x = ";
	cin >> Ax;
	cout << "y = ";
	cin >> Ay;

	cout << "Введите координаты точки B\n";
	int Bx, By;
	cout << "x = ";
	cin >> Bx;
	cout << "y = ";
	cin >> By;

	cout << "Введите координаты точки C\n";
	int Cx, Cy;
	cout << "x = ";
	cin >> Cx;
	cout << "y = ";
	cin >> Cy;

	float AC = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
	float BC = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));

	cout << "AC = " << AC << endl << "BC = " << BC << endl << "Произведение их длин - " << AC * BC;
}
