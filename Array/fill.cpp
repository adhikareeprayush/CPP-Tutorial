#include<iostream>
int main()
{
    int numbers[5];
    int initial = 10;
    std::fill(numbers, numbers+5, initial);
    //syntax of fill
    //fill(starting address, ending address, value to be filled)
    for(int i = 0; i<5; i++)
    {
        std::cout<<numbers[i]<<" ";
    }
    return 0;
}