#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите два числа\n";
	int A, B;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;

	int t;
	t = A;
	A = B;
	B = t;

	cout << "A = " << A << endl << "B = " << B;
}
