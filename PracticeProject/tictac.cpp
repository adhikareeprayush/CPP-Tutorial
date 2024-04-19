#include<iostream>
#include<ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running)
    {
        playerMove(spaces,player);
        drawBoard(spaces);
        if(checkWinner(spaces,player,computer))
        {
            std::cout<<"Player wins!"<<std::endl;
            running = false;
            break;
        }else if(checkTie(spaces))
        {
            std::cout<<"It's a tie!"<<std::endl;
            running = false;
            break;
        }
        computerMove(spaces,computer);
        drawBoard(spaces);
        if(checkWinner(spaces,player,computer))
        {
            std::cout<<"Computer wins!"<<std::endl;
            running = false;
            break;
        }else if(checkTie(spaces))
        {
            std::cout<<"It's a tie!"<<std::endl;
            running = false;
            break;
        }
    }


    return 0;
}

void drawBoard(char *spaces)
{   
    std::cout<<std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "   "<< spaces[0] <<" |  "<< spaces[1] <<"  |  "<< spaces[2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "   "<< spaces[3] <<" |  "<< spaces[4] <<"  |  "<< spaces[5] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "   "<< spaces[6] <<" |  "<< spaces[7] <<"  |  "<< spaces[8] << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout<<std::endl;
}
void playerMove(char* spaces, char player) {
    int number;
    bool isValidMove = false;

    do {
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;

        if (number >= 0 && number <= 8 && spaces[number] == ' ') {
            spaces[number] = player;
            isValidMove = true;
        } else {
            std::cout << "Invalid input or spot already taken! Please try again." << std::endl;
        }
    } while (!isValidMove);
}
void computerMove(char *spaces, char computer)
{
    int number;
    bool isValidMove = false;
    srand(time(0));
    do{
        number = rand() % 9;
        if(spaces[number] == ' ')
        {
            spaces[number] = computer;
            isValidMove = true;
        }
    }while(!isValidMove);
}
bool checkWinner(char *spaces, char player, char computer)
{
   if(spaces[0] == spaces[1]  && spaces[1] == spaces[2])
   {
         if(spaces[0] == player || spaces[0] == computer)
         {
              return 1;
         }
    }
    else if(spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
         if(spaces[3] == player || spaces[3] == computer)
         {
              return 1;
         }
    }
    else if(spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
         if(spaces[6] == player || spaces[6] == computer)
         {
              return 1;
         }
    }
    else if(spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
         if(spaces[0] == player || spaces[0] == computer)
         {
              return 1;
         }
    }
    else if(spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
         if(spaces[1] == player || spaces[1] == computer)
         {
              return 1;
         }
    }
    else if(spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
         if(spaces[2] == player || spaces[2] == computer)
         {
              return 1;
         }
    }
    else if(spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
         if(spaces[0] == player || spaces[0] == computer)
         {
              return 1;
         }
    }
    else if(spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
         if(spaces[2] == player || spaces[2] == computer)
         {
              return 1;
         }
   }
    return 0; 
}
bool checkTie(char *spaces){
    for(int i = 0; i<9; i++)
    {
        if(spaces[i] == ' ')
        {
            return 0;
        }
    }
    return 1;
}