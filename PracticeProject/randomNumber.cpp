#include<iostream>
#include<ctime>

int main()
{
    //pseudo-random number generator
    // (Not truly random, but good enough for most purposes)

    //seed the random number generator
    srand(time(0));

    //rand() generates a random number between 0 and RAND_MAX
    //(rand() % 100) generates a random number between 0 and 99
    int num = (rand() % 20) +1; //random number between 1 and 100

    std::cout << "Random number: " << num << std::endl;
    return 0;
}