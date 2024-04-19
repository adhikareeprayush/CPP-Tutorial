#include<iostream>
int main()
{
    // && (AND) = check if both conditions are true
    // || (OR) = check if at least one condition is true
    // ! (NOT) = check if the condition is false

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // Using AND Operator to decide the range
    if (temp > 0 && temp < 100)
    {
        std::cout << "The temperature is between 0 and 100." << std::endl;
    }
    else
    {
        std::cout << "The temperature is not between 0 and 100." << std::endl;
    }

    // Using OR Operator to decide the range
    if (temp < 0 || temp > 100)
    {
        std::cout << "The temperature is not between 0 and 100." << std::endl;
    }
    else
    {
        std::cout << "The temperature is between 0 and 100." << std::endl;
    }

    // Using NOT Operator to decide the range
    if (!(temp > 0 && temp < 100))
    {
        std::cout << "The temperature is not between 0 and 100." << std::endl;
    }
    else
    {
        std::cout << "The temperature is between 0 and 100." << std::endl;
    }

    return 0;
}