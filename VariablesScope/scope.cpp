#include<iostream>
//global variables are declared outside a block
int x = 10; //global variable
void printNum();
int main()
{
    //local variables are declared inside a block
    int y = 5; //local variable
    {
        int y = 10; //local variable
        std::cout << y << std::endl; //10
    }
    std::cout << y << std::endl; //5
    return 0;
}

void printNum()
{
    std::cout << x << std::endl; //10
    // std::cout << y << std::endl; error
}