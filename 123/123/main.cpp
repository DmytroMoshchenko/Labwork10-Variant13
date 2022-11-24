// Задача 1.1 Варіант 13;
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double radius, area, circumference, diameter;
    const double PI = 3.14159;
    cout << "Enter the diameter of the circle\n";
    cin >> diameter;
    area = PI * diameter / 4;
    cout << fixed << setprecision(1);
    cout << "Тhe area of the circle is " << area << endl;
    cout << "Enter the radius of the circle\n";
    cin >> radius;
    circumference = 2 * PI * radius;
    cout << fixed << setprecision(1);
    cout << "The length of the circle is " << circumference << endl;
    system("pause");
    return 0;
}