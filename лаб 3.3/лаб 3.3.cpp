#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x; // ������� ��������
    double R; // ������� ��������
    double y; // ��������� ���������� ������
    const double pi = 3.14159265358979323846; // ����� pi ������� ���� ����������

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // ������������ � ����� ����
    if (x <= -7 - R)
        y = R;
    else if (-7 - R < x && x <= -7 + R)
        y = -sqrt(pow(R, 2) - (x + 7) * (x + 7)) + R;
    else if (-7 + R < x && x <= -4)
        y = -R;
    else if (-4 < x && x <= 0)
        y = -(R * x) / 4;
    else if (0 < x && x <= pi)
        y = sin(x);
    else
        y = tan(45 * pi / 180) * x - pi;

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
