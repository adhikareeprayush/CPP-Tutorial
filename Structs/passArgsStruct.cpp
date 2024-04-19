#include<iostream>
struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car &car);
void paintCar(Car &car, std::string newColor);
int main()
{
    Car car1;
    Car car2;

    car1.model = "Toyota";
    car1.year = 2020;
    car1.color = "Red";
    printCar(car1);

    car2.model = "Ford";
    car2.year = 2019;
    car2.color = "Blue";
    printCar(car2);

    paintCar(car1, "Green");
    printCar(car1);

    return 0;
}

void printCar(Car &car)
{
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Year: " << car.year << std::endl;
    std::cout << "Color: " << car.color << std::endl;
}

void paintCar(Car &car, std::string newColor)
{
    car.color = newColor;
}