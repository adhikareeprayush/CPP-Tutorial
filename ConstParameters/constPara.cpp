#include<iostream>
void printInfo(const std::string &name,const int &age);
int main()
{
    //const parameter is effectivley read-only
    //code is more secure & converys intent
    //pass by reference is more efficient

    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;

}

void printInfo(const std::string &name,const int &age)
{ 
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}