#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "================ CALCULATOR ================\n";

    std::cout << "Enter (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter n1";
    std::cin >> num1;
    
    std::cout << "Enter n2";
    std::cin >> num2;

    std::cout << "============================================\n";

    return 0;
}