#include<iostream>
class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main()
{
    //constructor overloading means having more than one constructor in a class
    //constructor overloading is used to create objects in different ways

    Pizza pizza1("Pepperoni");
    std::cout<<pizza1.topping1<<std::endl;
    Pizza pizza2("Mushrooms", "Peppers");
    std::cout<<pizza2.topping1<<" "<<pizza2.topping2<<std::endl;
    Pizza pizza3;
    return 0;
}