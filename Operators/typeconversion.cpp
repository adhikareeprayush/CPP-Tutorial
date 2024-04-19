#include<iostream>
int main()
{
    // Type conversion
    
    // Implicit type conversion
    int students = 20;
    double average = students/3;
    std::cout << average << std::endl;

    // Explicit type conversion
    average = (double)students/3;
    std::cout << average << std::endl;

    char letter = 'A';
    std::cout << (int)letter << std::endl;
    



    return 0;
}