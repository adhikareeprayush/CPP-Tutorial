#include<iostream>
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

//functions name + parameters = function signature

int main()
{
    //function overloading
    bakePizza();
    bakePizza("cheese");
    bakePizza("cheese", "pepperoni");
    return 0;
}

void bakePizza()
{
    std::cout << "Baking pizza" << std::endl;
}

void bakePizza(std::string  topping1)
{
    std::cout << "Baking pizza with " << topping1 << std::endl;
}

void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Baking pizza with " << topping1 << " and " << topping2 << std::endl;
}