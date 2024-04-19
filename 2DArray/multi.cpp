#include<iostream>
int main()
{
    std::string cars[][4] = {{"Volvo", "BMW", "Ford", "Mazda"}, {"Red", "Blue", "Green", "Yellow"}};
    for(int i = 0; i<sizeof(cars)/sizeof(cars[0]); i++)
    {
        for(int j = 0; j<sizeof(cars[0])/sizeof(cars[0][0]); j++)
        {
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}