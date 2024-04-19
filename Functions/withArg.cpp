#include<iostream>
void happyBirthday(std::string birthdayBoy);
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    happyBirthday(name); // passing arguments
    return 0;
}
void happyBirthday(std::string birthdayBoy) //parameters
{
    std::cout << "Happy Birthday, " << birthdayBoy << "!" << std::endl;
}