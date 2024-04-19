#include<iostream>
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0; 
    int choice = 0;
    do{
        std::cout<<"Enter your choice:" <<std::endl;
        std::cout << "1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Show Balance" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            balance += deposit();
            break;
        case 2:
            balance = withdraw(balance);
            break;
        case 3:
            showBalance(balance);
            break;
        case 4:
            std::cout<<"Goodbye!"<<std::endl;
            break;
        default:
            std::cout<<"Invalid choice"<<std::endl;
        }

    }while(choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout<<"Your balance is: $"<<balance<<std::endl;
}

double deposit()
{
    double depositAmount;
    std::cout<<"Enter the amount you would like to deposit: ";
    std::cin>>depositAmount;
    return depositAmount;
}

double withdraw(double balance)
{
    double withdrawAmount;
    std::cout<<"Enter the amount to withdraw" << std::endl;
    std::cin>>withdrawAmount;
    if(withdrawAmount > balance)
    {
        std::cout<<"Insufficient funds"<<std::endl;
    }
    else
    {
        balance -= withdrawAmount;
    }
    return balance;
}

