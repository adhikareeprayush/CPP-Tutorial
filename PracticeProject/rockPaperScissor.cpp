#include<iostream>
#include<ctime>
int returnMove();
int main()
{
    int choice = 0;
    int userInput,moveReturned;
    // 1 for rock, 2 for paper, c for scissor
    do
    {
        std::cout << "Enter your choice" << std::endl;
        std::cout << "1. Play the game" << std::endl;
        std::cout << "2. Quit the game" << std::endl;
        std::cin >> choice;
        switch(choice){
            case 1:
                std::cout<<"Enter your choice:" << std::endl;
                std::cout << "1. Rock" << std::endl;
                std::cout << "2. Paper" << std::endl;
                std::cout << "3. Scissor" << std::endl;
                std::cin >> userInput;
                moveReturned = returnMove();

                std::cout<<"The bot Played: " << moveReturned <<std::endl;
                if(userInput == 1 && moveReturned==2)
                    std::cout<<"You Lost\n";
                else if(userInput == 1 && moveReturned==3)
                    std::cout<<"You Won\n";
                else if(userInput==2 && moveReturned==1)
                    std::cout<<"You Won\n";
                else if(userInput==2 && moveReturned==3)
                    std::cout<<"You Lost\n";
                else if(userInput==3 && moveReturned==1)
                    std::cout<<"You Lost\n";
                else if(userInput==3 && moveReturned==2)
                    std::cout<<"You Won\n";
                else
                    std::cout<<"Its a tie\n";
        }
    } while (choice!=2);
    
    return 0;
}
int returnMove(){
    srand(time(0));
    return (rand()%3 + 1);
}