#include <iostream>
using namespace std;

struct dot
{
    int x;
    int y;
};

float distance(dot A, dot B)
{
    return sqrt((A.x-B.x) * (A.x-B.x) + (A.y-B.y) * (A.y-B.y));
}

float perimeter(dot A, dot B, dot C)
{
    return distance(A, B) + distance(A, C) + distance(B, C);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите количество точек: ";
    cin >> N;
    dot* A = new dot[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Точка " << i + 1 << endl;
        cout << "x: ";
        cin >> A[i].x;
        cout << "y: ";
        cin >> A[i].y;
    }
    
    float maxPerimeter = 0;
    int maxA = 0, maxB = 0, maxC = 0;
    for (int i = 0; i < N-2; i++)
        for (int j = i+1; j < N - 1; j++)
            for (int k = j+1; k < N; k++)
                if (perimeter(A[i], A[j], A[k]) > maxPerimeter)
                {
                    maxPerimeter = perimeter(A[i], A[j], A[k]);
                    maxA = i+1;
                    maxB = j+1;
                    maxC = k+1;
                }
    cout << "Наибольший периметр: " << maxPerimeter << endl;
    cout << "Точки треугольника: " << maxA << ", " << maxB << " и " << maxC;
}