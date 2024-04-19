#include<iostream>
int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

//stack overflow is when the stack memory is full
//this can happen when you have a recursive function that calls itself too many times
//this can happen when you have a function that calls itself too many times

int main()
{   
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The factorial of " << n << " is " << factorial(n) << std::endl;

    return 0;
}