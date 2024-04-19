#include<iostream>
int sortAscending(int numbers[], int size);
void displayArray(int numbers[], int size);
int main()
{   
    int numbers[] =  {5,2,53,21,532,12};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    sortAscending(numbers, size);
    displayArray(numbers,size);
    return 0;
}

void displayArray(int numbers[], int size)
{
    for(int i = 0; i<size; i++)
    {
        std::cout<<numbers[i]<<" ";
    }
    std::cout<<std::endl;
}

int sortAscending(int numbers[], int size)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(numbers[i]>numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}