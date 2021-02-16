#include <iostream>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите порядок матрицы: ";
    int M;
    cin >> M;
    int** A = new int*[M];
    for (int i = 0; i < M; i++)
        A[i] = new int[i + 1];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i][j];
        }
        cout << endl;
    }
}