#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите три числа\n";
	int A, B, C;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;

	int t;
	t = C;
	C = A;
	A = B;
	B = t;

	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C;
}
