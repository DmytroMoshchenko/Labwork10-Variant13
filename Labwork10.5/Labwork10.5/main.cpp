#include <cmath>
#include <iostream>
#include <cmath>

int main() {
    float y;
    float d;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << "Enter the value of d: ";
    std::cin >> d;
    float result = (pow(std::sin(y), 2) + 0.3) / (std::exp(y) + log(d));
    std::cout << "Result: " << result << std::endl;
}