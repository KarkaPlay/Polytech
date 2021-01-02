#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива: ";
	int n;
	cin >> n;
	int* A = new int[n];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int k = 0;

	for (int i = 0; i < n; i++)
	{
		if (A[i] != A[i + 1])
		{
			k++;
		}
	}

	int* C = new int[k];
	int* B = new int[k];
	int j = 0, u = 1;

	for (int i = 0; i < n; i++)
	{
		if (A[i] != A[i + 1])
		{
			C[j] = A[i];
			B[j] = u;
			j++;
			u = 1;
		}
		else
		{
			u++;
		}
	}

	cout << "Массив C: ";
	for (int i = 0; i < k; i++)
		cout << C[i] << " ";

	cout << endl;

	cout << "Массив B: ";
	for (int i = 0; i < k; i++)
		cout << B[i] << " ";
}