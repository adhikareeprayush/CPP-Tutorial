#include<iostream>
int searchArray(int numbers[],int size, int number);
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int search;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    std::cout<<"Enter the number you want to search: ";
    std::cin>>search;
    index = searchArray(numbers, size, search);
    if(index != -1)
    {
        std::cout<<"Number found at index: "<<index<<std::endl;
    }
    else
    {
        std::cout<<"Number not found"<<std::endl;
    }
    return 0;
}
int searchArray(int numbers[],int size, int number)
{
    for(int i = 0; i<size; i++)
    {
        if(numbers[i] == number)
        {
            return i;
        }
    }
    return -1;
}