#include<iostream>
int main()
{
    //pointer is a variable that stores the memory address of another variable
    // & is the address of operator
    // * is the dereference operator

    // int number = 10;
    // int *pNumber = &number;
    // std::cout<<"The value of number is: "<<number<<std::endl;
    // std::cout<<"The address of number is: "<<&number<<std::endl;

    // std::cout<<"The value of pNumber is: "<<pNumber<<std::endl;
    // std::cout<<"The address of pNumber is: "<<&pNumber<<std::endl;
    // std::cout<<"The value of *pNumber is: "<<*pNumber<<std::endl;

    //accessing array elements using pointers
    int numbers[] = {10, 20, 30, 40, 50};
    int *pNumbers = numbers;
    for(int i = 0; i<5; i++)
    {   
        std::cout<<"The value of numbers["<<i<<"] is: "<<numbers[i]<<std::endl;
        pNumbers++;
    }
    return 0;
}