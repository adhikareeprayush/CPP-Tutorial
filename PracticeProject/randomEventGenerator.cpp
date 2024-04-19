#include<iostream> 
#include<ctime> 
int main()
{
    // random events generator
    // seed the random number generator
    srand(time(0));

    int randNum = rand() % 5 + 1; // random number between 1 and 100

    switch(randNum)
    {
        case 1:
            std::cout << "You find a chest full of gold!" << std::endl;
            break;
        case 2:
            std::cout << "You encounter a dragon!" << std::endl;
            break;
        case 3:
            std::cout << "You find a healing potion." << std::endl;
            break;
        case 4:
            std::cout << "You find a map to a hidden treasure!" << std::endl;
            break;
        case 5:
            std::cout << "You find a mysterious key." << std::endl;
            break;
        default:
            std::cout << "Nothing happens." << std::endl;
    }
    return 0;
}