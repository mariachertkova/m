#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
	setlocale(LC_ALL, "Russian");
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) //���� ������������ ������ ��� ����� 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "������ ������ ����� " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "������ ������ ����� " << x << endl;
    }
    else
    {
        cout << "������������ ������ 0, ����� ��������������." << endl;
    }
	system ("pause");
    return 0;
}