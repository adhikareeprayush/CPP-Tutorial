#include<iostream>
int main()
{
    //foreach loop = loop that iterates over a range of values
    //for each element in the range, do something
    
    //syntax: for(dataType var : array)

    std::string students[] = {"John", "Doe", "Jane", "Doe"};
    for(std::string student : students)
    {
        std::cout<<student<<std::endl;
    }
    return 0;
}