#include<iostream>
int main()
{
    int number;
    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number<0);

    std::cout << "The number you entered is " << number << "." << std::endl;
    return 0;
}