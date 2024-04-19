#include<iostream>
#include<vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string str_t;
// typedef int number_t;
using str_t = std::string;
using number_t = int;
int main()
{
    str_t name = "John";
    std::cout << name ;
    number_t age = 25;
    std::cout << age;
    return 0;
}