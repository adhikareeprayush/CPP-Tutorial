#include<iostream>
class Animal{
    public:
        bool alive = true;
        void eat()
        {
            std::cout<<"I am eating"<<std::endl;
        }
};

class Dog : public Animal{
    public:
        void bark()
        {
            std::cout<<"I am barking"<<std::endl;
        }
};

class Cat : public Animal{
    public:
        void meow()
        {
            std::cout<<"I am meowing"<<std::endl;
        }
};

int main()
{
    //Inheritance is a mechanism in which one class acquires 
    //the properties and behavior of another class

    Dog dog;
    std::cout<<dog.alive<<std::endl;
    dog.eat();
    dog.bark();

    Cat cat;
    std::cout<<cat.alive<<std::endl;
    cat.eat();
    cat.meow();
    

    return 0;
}