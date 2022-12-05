#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    int a, b;
    double z1, z2;

    cout << "Enter the value a:";
    cin >> a;

    cout << "Enter the value b:";
    cin >> b;

    z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
    cout << "The value of the first expression:" << z1 << endl;

    z2 = (1 + sin(2 * b)) / cos(2 * b);
    cout << "The value of the second expression:" << z2 << endl;
}