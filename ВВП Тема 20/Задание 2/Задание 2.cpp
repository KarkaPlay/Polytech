#include <iostream>
using namespace std;

void deleteElement(int *&Array, int &size, int element)
{
	size--;
	int* newA = new int[size];

	for (int i = 0; i < element; i++)
		newA[i] = Array[i];
	for (int i = element+1; i < size+1; i++)
		newA[i - 1] = Array[i];

	delete[] Array;
	Array = newA;
}

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

	int L;
	cout << "Введите число L: ";
	cin >> L;

	int seriesLength = 1, startElement = 0, endElement = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == A[i + 1])
		{
			seriesLength++;
			endElement = i+1;
		}
		if (A[i] != A[i+1])
		{
			startElement = i + 1;
			seriesLength = 1;
		}
		if (seriesLength > L)
		{
			A[startElement] = 0;
			int j = startElement + 1;
			for (int k = 0; k < seriesLength-1; k++)
				deleteElement(A, n, j);
			i = i - seriesLength;
		}
	}

	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
}