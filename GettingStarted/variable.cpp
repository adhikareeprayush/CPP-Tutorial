#include<iostream>
int main()
{
    //int(whole numbers)
    int x; //declaration
    x = 5.5; //initialization
    int y = 6; //declaration and initialization
    int sum =x+y;
    std::cout<<x << '\n'; //5
    std::cout<<y << '\n'; //6
    std::cout<<sum << '\n'; //11
    std::cout<<x << '\n'; //5

    //double(including decimals)
    double z = 5.5;
    std::cout<<z<<'\n'; //5.5

    //char(single character)
    char grade = 'A';
    char initial = 'S';
    char currency = '$';
    std::cout<<initial<<'\n'; //S

    //booleans(true or false)
    bool is_true = true;
    bool is_false = false;
    std::cout<<is_true<<'\n'; //1
    std::cout<<is_false<<'\n'; //0

    //strings (objects that represent a sequence of characters)
    std::string name = "Saksham";
    std::cout<<"Hello! "<<name<<'\n'; //Saksham

    


    return 0;
}