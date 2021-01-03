#include <iostream>
using namespace std;

int main()
{
    struct dot
    {
        int x;
        int y;
        float distance;
    };

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

    dot maxDistanceDot{ 0, 0, 0 };
    int maxi = -1;
    for (int i = 0; i < N; i++)
        if ((A[i].x < 0) and (A[i].y > 0))
        {
            A[i].distance = sqrt((A[i].x * A[i].x) + (A[i].y * A[i].y));
            if (A[i].distance > maxDistanceDot.distance)
            {
                maxDistanceDot = A[i];
                maxi = i + 1;
            }
        }
    if (maxi == -1)
        cout << "Во второй четверти точек нет.";
    else
        cout << "Наиболее удалена Точка " << maxi << ", её координаты:";
    cout << endl << "x: " << maxDistanceDot.x << "  y: " << maxDistanceDot.y;
    cout << endl << "Дистанция: " << maxDistanceDot.distance;
}