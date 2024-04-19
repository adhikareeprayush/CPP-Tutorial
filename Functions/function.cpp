#include<iostream>

//function declaration
void happyBirthday();
int main()
{
    //functon is a block of reusable code that performs a specific task
    happyBirthday(); //function call
    happyBirthday();
    happyBirthday();

    return 0;
}
//function definition
void happyBirthday()
{
    std::cout << "Happy Birthday!" << std::endl;
}
