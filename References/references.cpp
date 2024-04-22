#include<iostream>
using namespace std;
void reference(string& str)
{
    cout << str;
}
//the reference function takes address of the string as parameter

int main()
{
    string name = "Prayush Adhikari";
    reference(name);
    return 0;
}


