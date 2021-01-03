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

	struct series
	{
		int length;
		int element;
		int startElement;
	};

	int K;
	cout << "Введите число K: ";
	cin >> K;

	series lastSeries = { 1, A[n - 1], n - 1 };
	int i = n - 1;
	while (A[i] == A[i - 1])
	{
		lastSeries.length++;
		i--;
		lastSeries.startElement = i;
	}


	series kSeries = { 1, 0, 0 };
	int currentSeries = 0;
	i = 0;

	while (currentSeries != K)
	{
		kSeries.element = A[i];
		kSeries.startElement = i;
		kSeries.length = 1;
		while (A[i] == A[i + 1])
		{
			kSeries.length++;
			i++;
		}
		i++;
		currentSeries++;
	}


	cout << "Последняя серия: ";
	for (int i = 0; i < lastSeries.length; i++)
	{
		cout << lastSeries.element << " ";
	}
	cout << endl << "Серия с номером K: ";
	for (int i = 0; i < kSeries.length; i++)
	{
		cout << kSeries.element << " ";
	}

	int difference = abs(kSeries.length - lastSeries.length);
	if (kSeries.length > lastSeries.length)
	{
		for (int i = kSeries.startElement + kSeries.length - 1; i < n; i++)
		{
			A[i] = A[i + 1];
		}
		lastSeries.startElement -= difference;
	}
	if (lastSeries.length > kSeries.length)
	{
		for (int i = n; i > kSeries.startElement + kSeries.length - 1; i--)
		{
			A[i] = A[i - 1];
		}
		lastSeries.startElement += difference;
	}

	int j = kSeries.startElement;
	for (int i = 0; i < lastSeries.length; i++)
	{
		A[j] = lastSeries.element;
		j++;
	}
	for (int i = lastSeries.startElement; i < n; i++)
	{
		A[i] = kSeries.element;
	}

	cout << endl;
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
}