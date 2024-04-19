#include<iostream>
int main()
{
    //nullptr = keyword represents a null pointer
    //nullptrs are helpful in avoiding the ambiguity of using 0 or NULL
    //also helpful to determine if a pointer is pointing to a valid memory location

    int *pNumber = nullptr;
    int x =123;
    pNumber = &x;

    if(pNumber == nullptr)
    {
         std::cout <<"Address was not assigned"<<std::endl;
    }
    else
    {
        std::cout <<"Address was assigned"<<std::endl;
        std::cout <<"The value of x is: "<<*pNumber<<std::endl;
    }



    return 0;
}