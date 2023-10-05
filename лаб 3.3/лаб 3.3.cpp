// Lab_03_3.cpp
// < Цай Девід >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double pi = 3.14159265358979323846; // число пі

    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -7 - R)
        y = R;
    else if (-7 - R < x && x <= -7 + R)
        y = -sqrt(R * R - (x + 7) * (x + 7) + R);
    else if (-7 + R < x && x <= -4)
        y = R;
    else if (-4 < x && x <= 0)
        y = -(x - R) / 4;
    else if (0 < x && x <= pi)
        y = sin(x);
    else
        y = tan(45 * pi / 180) * x - pi;

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
