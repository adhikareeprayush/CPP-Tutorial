#include<iostream>
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //name.length() returns the number of characters in the string
    if(name.length() >12)
    {
        std::cout << "Your name is too long." << std::endl;
    }
    else
    {
        std::cout << "Your name is " << name << std::endl;
    }

    //name.empty() returns true if the string is empty
    name.empty() ? std::cout << "The string is empty." : std::cout << "The string is not empty." << std::endl;

    //name.append() adds a string to the end of the current string
    name.append(" is a good person.");
    std::cout << name << std::endl;

    //name.insert() adds a string at a specific position in the current string
    name.insert(0, "Mr. ");
    std::cout << name << std::endl;

    //name.clear() removes all characters from the string

    //name.erase() removes characters from the string

    //name.replace() replaces characters in the string
    name.replace(0, 4, "Mrs. ");
    std::cout << name << std::endl;

    //name.find() returns the position of the first occurrence of a string in the current string
    std::cout << name.find("good") << std::endl;

    //name.substr() returns a substring of the current string
    std::cout << name.substr(0, 5) << std::endl;

    //name.at() returns the character at a specific position in the string
    std::cout << name.at(0) << std::endl;

    //name.front() returns the first character of the string
    std::cout << name.front() << std::endl;

    //name.back() returns the last character of the string
    std::cout << name.back() << std::endl;

    //name.pop_back() removes the last character from the string
    //name.push_back() adds a character to the end of the string

    //name.c_str() returns a pointer to the string
    std::cout << name.c_str() << std::endl;

    //name.compare() compares two strings
    std::string name2 = "Mrs. John is a good person.";

    if(name.compare(name2) == 0)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else
    {
        std::cout << "The strings are not equal." << std::endl;
    }

    //name.swap() swaps the contents of two strings
    name.swap(name2);
    std::cout << name << std::endl;

    



    return 0;
}