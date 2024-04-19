#include<iostream>
class Stove{
    private:
        int temperature = 0;
    public:
        Stove(int temperature)
        {
            setTemperature(temperature);
        }
        int getTemperature()
        {
            return temperature;
        }
        void setTemperature(int temperature)
        {   
            if(temperature<0)
            {
                this->temperature = 0;
            }
            else if(temperature>10)
            {
                this->temperature = 10;
            }
            else
            {
                this->temperature = temperature;
            }
        }

};
int main()
{
    //Abstraction = hiding unnecessary details and showing only the necessary details
    //getter = function that makes a private attribute READABLE
    //setter = function that makes a private attribute WRITABLE

    Stove stove(7);
    
    std::cout<<stove.getTemperature()<<std::endl;




    return 0;
}