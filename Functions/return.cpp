#include<iostream>
double square(double length);
int main()
{   
    double length;
    std::cout << "Enter the length of the side: ";
    std::cin >> length;
    double area = square(length);
    std::cout << "Area: " << area << " Sq. units" << std::endl;
    return 0;
}

double square(double length)
{
    return length * length;
}
