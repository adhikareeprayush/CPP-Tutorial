#include<iostream>
namespace first
{
    int x = 5;
}
namespace second
{
    double x = 3.14;
}

int main()
{
    using namespace second;
    std::cout<<x;
    return 0;
}