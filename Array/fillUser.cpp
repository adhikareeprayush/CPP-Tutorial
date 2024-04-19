#include<iostream>
int main()
{
    //user filling the array
    int numbers[5];
    for(int i = 0; i<5; i++)
    {
        std::cout<<"Enter number "<<i+1<<": ";
        std::cin>>numbers[i];
    }

    //displaying the array
    for(int i = 0; i<5; i++)
    {
        std::cout<<numbers[i]<<" ";
    }
    return 0;
}