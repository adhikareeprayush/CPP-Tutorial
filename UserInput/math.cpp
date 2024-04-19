#include<iostream>
#include<cmath>
int main()
{
    double x = 2;
    double y =4;
    double z;

    // max function
    z = std::max(x,y);
    std::cout << z << std::endl;

    // min function 
    z = std::min(x,y);
    std::cout << z << std::endl;

    // sqrt function returns the square root of x
    z = std::sqrt(y);
    std::cout << z << std::endl;

    // round function rounds to the nearest integer
    z = std::round(3.6);
    std::cout << z << std::endl;

    // ceil function rounds up
    z = std::ceil(3.1);
    std::cout << z << std::endl;

    // pow function raises x to the power of y
    z = std::pow(x,y);
    std::cout << z << std::endl;

    // floor function rounds down
    z = std::floor(3.9);
    std::cout << z << std::endl;

    // abs function returns absolute value
    z = std::abs(-3.9);
    std::cout << z << std::endl;
    
    return 0;
}