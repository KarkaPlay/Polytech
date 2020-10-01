#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "y = 3x^6 - 6x^2 - 7" << endl << "Введите X: ";
	int x;
	cin >> x;
	int y = pow(3*x, 6) - pow(6*x, 7) - 7;
	cout << "y = " << y;
}
