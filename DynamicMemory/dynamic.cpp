#include<iostream>
int main()
{
    //dynamic memory is memory that is allocated at runtime
    //it is allocated on the heap
    //it is slower than static memory
    //it is used when you don't know the size of the memory you need at compile time
    //it is used when you need to allocate memory that will be used for a long time
    //it is used when you need to allocate a large amount of memory
    //it is used when you need to allocate memory that will be shared between functions
    //it is used when you need to allocate memory that will be shared between threads
    //it is used when you need to allocate memory that will be shared between processes

    //to allocate memory on the heap you use the new keyword
    //to deallocate memory on the heap you use the delete keyword
    //to allocate an array on the heap you use the new[] keyword
    //to deallocate an array on the heap you use the delete[] keyword

    //heap is a large pool of memory that is shared between all the processes on the system
    //heap is slower than stack
    //stack is a small pool of memory that is shared between all the threads in a process

    int *pNum = NULL;
    pNum = new int;
    *pNum = 5;

    std::cout << "address: " << pNum << std::endl;
    std::cout << "value: " << *pNum << std::endl;

    delete pNum;

    return 0;
}