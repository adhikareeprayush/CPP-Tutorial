#include<iostream>
int main()
{   
    //array is a collection of similar data types
    //int marks[4] = {23, 45, 56, 89};
    //marks[0] = 23;
    //marks[1] = 45;
    //marks[2] = 56;
    //marks[3] = 89;

    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    std::string cars[] = {"BMW", "Audi", "Mercedes"};
    // car[0] = "BMW";
    // car[1] = "Audi";
    // car[2] = "Mercedes";

    //Accesing the cars
    //std::cout<<car[0]<<std::endl;

    //Accesing all the cars
    for(int i = 0; i<3; i++)
    {
        std::cout<<cars[i]<<std::endl;
    }
    return 0;
}