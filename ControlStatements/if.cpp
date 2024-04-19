#include<iostream>
int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age == 18)
    {
        std::cout << "You are 18 years old." << std::endl;
    }
    else if(age<0)
    {
        std::cout << "You are not born yet." << std::endl;
    }
    else if(age >100)
    {
        std::cout << "You are too old to enter this program." << std::endl;
    }
    else if(age < 18)
    {
        std::cout << "You are under 18 years old." << std::endl;
    }
    else
    {
        std::cout << "You are over 18 years old." << std::endl;
    }
    return 0;
}