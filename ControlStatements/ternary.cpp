#include<iostream>
int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    // int max = (condition) ? value_if_true : value_if_false;
    int max = (a > b) ? a : b;
    std::cout << "The maximum of " << a << " and " << b << " is " << max << std::endl;
    return 0;
}