#include<iostream>

int main()
{
    double students = 20;

    // Addition
    students = students+1;
    std::cout << students << std::endl;
    students+=1;
    std::cout << students << std::endl;
    students++;
    std::cout << students << std::endl;

    students = 20;
    // Subtraction
    students = students-1;
    std::cout << students << std::endl;
    students-=1;
    std::cout << students << std::endl;
    students--;
    std::cout << students << std::endl;

    students = 20;
    // Multiplication
    students = students*2;
    std::cout << students << std::endl;
    students*=2;
    std::cout << students << std::endl;

    students = 20; 
    // Division
    students = students/3;
    std::cout << students << std::endl;
    students/=3;
    std::cout << students << std::endl;

    // Modulus
    int remainder = 20%3;
    std::cout << remainder << std::endl;

    

    return 0;
}