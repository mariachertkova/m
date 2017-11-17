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
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) //The discriminant is greater than or equal to 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "First root= " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Second root= " << x << endl;
    }
    else
    {
        cout << "The discriminant is less than zero, there are no roots" << endl;
    }
	system ("pause");
    return 0;
}