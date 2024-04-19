#include<iostream>
int main()
{
    int a = 10;
    std::cout<<sizeof(a)<<std::endl;

    int marks[] = {1, 2, 3, 4};
    std::cout<<sizeof(marks)<<std::endl;

    //Length of marks
    std::cout<<sizeof(marks)/sizeof(marks[0])<<std::endl;

    double c =100;
    std::cout<<sizeof(c)<<std::endl;

    char d = 'a';
    std::cout<<sizeof(d)<<std::endl;
    return 0;
}