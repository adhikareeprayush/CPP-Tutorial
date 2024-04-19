 #include<iostream>
 int main()
 {
    std::string students[] = {"John", "Doe", "Jane", "Doe"};
    for(int i = 0; i< sizeof(students)/sizeof(std::string) ; i++)
    {
        std::cout<<students[i]<<std::endl;
    }
    return 0;
 }