#include<iostream>
int main()
{
        
    double temp;
    char unit;
    std::cout << "****** Temperature Conversion ******" << std::endl;
    std::cout << "F - Fahrenheit to Celsius" << std::endl;
    std::cout << "C - Celsius to Fahrenheit" << std::endl;
    std::cout << "Enter the unit: ";
    std::cin >> unit;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(unit == 'F' || unit == 'f')
    {
        double celsius = (temp - 32) * 5/9;
        std::cout << temp << " Fahrenheit is " << celsius << " Celsius." << std::endl;
    }
    else if(unit == 'C' || unit == 'c')
    {
        double fahrenheit = (temp * 9/5) + 32;
        std::cout << temp << " Celsius is " << fahrenheit << " Fahrenheit." << std::endl;
    }
    else
    {
        std::cout << "Invalid unit." << std::endl;
    }

    std::cout << "****** Thank you for using the temperature conversion tool ******" << std::endl;
    
    return 0;
}