#include<iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    
    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    //constructor is a special member function
    //constructor has the same name as the class
    //constructor is called when an object is created
    //constructor is used to initialize the object

    Student student1("John", 25, 3.5);
    std::cout << student1.name << " " << student1.age << " " << student1.gpa << std::endl;


    return 0;
}