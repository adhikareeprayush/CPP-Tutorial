#include<iostream>

class Human{
    public:
        std::string name;
        int age;
        void introduce()
        {
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old" << std::endl;
        }
};

int main()
{
    //objects are instances of classes
    //classes are user defined data types
    //class is a blueprint for objects

    // objects contain attributes and methods
    // they are used to model real world entities
    Human human1;
    human1.name = "John";
    human1.age = 25;
    human1.introduce();
    return 0;

}