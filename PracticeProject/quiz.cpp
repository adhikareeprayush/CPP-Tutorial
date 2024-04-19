#include<iostream>
int main()
{
    std::string questions[] = {"What is the capital of France?", "What is 1+1?", "What is 2*2?"};
    std::string options[][3] = {{"Paris", "London", "Berlin"}, {"1", "2", "3"}, {"3", "4", "5"}};
    int answers[] = {0, 1, 1};
    int score = 0;
    int response;

    for(int i =0; i< sizeof(questions)/sizeof(std::string); i++)
    {
        std::cout<<questions[i]<<std::endl;
        std::cout<<"0. "<<options[i][0]<<std::endl;
        std::cout<<"1. "<<options[i][1]<<std::endl;
        std::cout<<"2. "<<options[i][2]<<std::endl;
        std::cout<<"Enter your answer: ";
        std::cin>>response;
        if(response == answers[i])
        {
            score++;
        }
    }

    std::cout<<"Your score is: "<<score<<"/"<<sizeof(questions)/sizeof(std::string)<<std::endl;

    return 0;
}