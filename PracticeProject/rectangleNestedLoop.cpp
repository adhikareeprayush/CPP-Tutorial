#include<iostream>
int main()
{
    int rows, columns;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << j+1;
        }
        std::cout << std::endl;
    }

    return 0;
}