#include<iostream>
struct Person
{
    std::string name;
    int age;
    double weight;
};

int main()
{
    // struct is a user-defined data type that groups related data together
    struct Person person1;
    person1.name = "John";
    person1.age = 25;
    person1.weight = 75.5;

    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Weight: " << person1.weight << std::endl;
    
    return 0;
}