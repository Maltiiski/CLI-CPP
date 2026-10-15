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

    switch (op){
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result <<'\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << '\n';
        break;
    default:
        std::cout << "Invalid Response\n";
        break;
    }

    std::cout << "============================================\n";

    return 0;
}