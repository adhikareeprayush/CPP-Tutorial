#include<iostream>
int main()
{
    double num1, num2;
    char op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    switch(op)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '/':
        if(num2 == 0)
        {
            std::cout << "Division by zero is not allowed." << std::endl;
        }
        else
        {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        break;
    default:
        std::cout << "Invalid operator." << std::endl;
        break;
    }
    return 0;
}