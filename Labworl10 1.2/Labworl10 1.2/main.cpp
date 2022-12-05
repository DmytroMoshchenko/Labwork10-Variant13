// Задача 1.2, Варіант 13;
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double kineticEnergy, mass, speed, potentianEnergy, hight;
    
    cout << "Enter the mass of the kineticEnergy\n";
    cin >> mass;
    cout << "Enter the speed of the kineticEnergy\n";
    cin >> speed;
    kineticEnergy = 0.5 * mass * speed;
    cout << fixed << setprecision(1);
    cout << "kineticEnergy = " << kineticEnergy << endl;
    cout << "Enter the mass of the potentianEnergy\n";
    cin >> mass;
    cout << "Enter the hight of the potentianEnergy\n";
    cin >> hight;
    potentianEnergy = mass * 9.8 * hight;
    cout << fixed << setprecision(1);
    cout << "potentianEnergy = " << potentianEnergy << endl;
    system("pause");
    return 0;
}