#include<iostream>

//cout >> (insertion operator) "Enter a number: ";
//cin << (extraction operator) number;
//cin << name; //takes only first word
//getline(cin, name); //takes full name with spaces

int main()
{

    //when using some input above the getline function, 
    //it is necessary to use cin.ignore() to clear the buffer
    //a newline is left in the buffer after the extraction operator
    //ws (whitespaces) can also be used to clear the buffer

    std::string name;
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name); //takes full name with spaces
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;
    return 0;
}