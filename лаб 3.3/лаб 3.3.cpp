// Lab_03_3.cpp
// < ��� ���� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 23
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // ������� ��������
    double pi = 3.14159265358979323846; // ����� �

    double R; // ������� ��������
    double y; // ��������� ���������� ������
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // ������������ � ����� ����
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
