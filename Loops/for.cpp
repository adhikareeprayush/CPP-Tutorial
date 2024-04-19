#include<iostream>
int main()
{
    //for(initialization; condition; update)
    for(int i = 1; i <= 100; i++)
    {
        // break stops the loop
        if(i == 50)
        {
            break;
        }
        //continue skips the current iteration
        if(i % 2 == 0)
        {
            continue;
        }
        std::cout << i << std::endl;
    }
    return 0;
}