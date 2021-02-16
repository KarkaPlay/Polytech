#include <iostream>
#include <stack>
using namespace std;

int main()
{
    setlocale(LC_ALL, ("Russian"));
   /* cout << "Введите порядок матрицы: ";
    int M;
    cin >> M;
    int** A = new int* [M];
    for (int i = 0; i < M; i++)
        A[i] = new int[i + 1];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];*/

    const int M = 3;
    int A[M][M] = { 1, 2, 3,
                    4, 5, 6,
                    7, 8, 9 };
    
    int r = -1;
    int elements = 0;

    for (int i = 0; i < M / 2 + 1; i++)
    {
        for (int j = i; j < M - i + 1; j++)
            cout << A[j][i] << " ";

        for (int j = i + 1; j < M - i + 1; j++)
            cout << A[M - i + 1][j] << " ";

        for (int j = M - i; j > i; j--)
            cout << A[j][M - i + 1] << " ";

        for (int j = M - i; j > i + 1; j--)
            cout << A[i][j];
        cout << " ";
    }
}