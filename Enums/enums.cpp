#include<iostream>
enum Day{Monday = 1, Tuesday =2, Wednesday =3, Thursday=4, Friday=5, Saturday=6, Sunday=0};
int main()
{
    //enum is a user defined data type
    //enum is used to assign names to integral constants
    //enum is used to make the code more readable, managable

    //Day is a datatype
    
    Day today = Friday;
    switch (today)
    {
    case Monday:
        std::cout << "Today is Monday" << std::endl;
        break;
    case Tuesday:
        std::cout << "Today is Tuesday" << std::endl;
        break;
    case Wednesday: 
        std::cout << "Today is Wednesday" << std::endl;
        break;
    case Thursday:
        std::cout << "Today is Thursday" << std::endl;
        break;
    case Friday:
        std::cout << "Today is Friday" << std::endl;
        break;
    case Saturday:
        std::cout << "Today is Saturday" << std::endl;
        break;
    case Sunday:
        std::cout << "Today is Sunday" << std::endl;
        break;
    default:
        std::cout << "Invalid day" << std::endl;
        break;
    }








    return 0;
}