#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "y = 4(x-3)^6 - 7(x-3)^3 + 2 " << endl << "Введите X: ";
	int x;
	cin >> x;
	int y = 4*pow(x-3, 6) - 7*pow(x-3, 3) + 2;
	cout << "y = " << y;
}
