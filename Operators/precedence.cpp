#include<iostream>
int main()
{
    //parenthesis have the highest precedence
    double students = 20;
    students = (students+1)*2;
    std::cout << students << std::endl;

    //unary operators have the next highest precedence
    students = 20;
    students = -students+1;
    std::cout << students << std::endl;

    //multiplication and division have the next highest precedence
    students = 20;
    students = students*2+1;
    std::cout << students << std::endl;

    //addition and subtraction have the lowest precedence
    students = 20;
    students = students+2*3;
    std::cout << students << std::endl;

    return 0;
}