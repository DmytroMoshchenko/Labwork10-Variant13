#include <cmath>
#include <iostream>
#include <cmath>

int main() {
    float a = pow(2.2F, 2) * 3.0F;
    std::cout << a << std::endl;
    float x = std::pow(a - 3.0F, 1 / 3.0F);
    std::cout << x << std::endl;
    float y = a * cos(x) - 3.0F * sin(x);
    std::cout << y << std::endl;
}