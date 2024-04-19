#include<iostream>
template <typename T,typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}


int main()
{
    // function templates are used to create functions that can work with many different types
    // function templates are used to create functions that can work with many different numbers of parameters

    std::cout << max(3, 7.3) << std::endl;
    std::cout << max(3.5, 7.3) << std::endl;
    std::cout << max('1','2') << std::endl;

    return 0;
}