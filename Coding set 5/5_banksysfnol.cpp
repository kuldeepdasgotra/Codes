#include <iostream>
using namespace std;
class Account 
{
protected:
    int accountNumber;
    double balance;
public:
    Account(int a,double b) 
    {
        accountNumber=a;
        balance=b;
    }
    virtual void display() 
    {
        cout <<"Account: "<<accountNumber<<", Balance: "<<balance<<endl;
    }
};
class SavingsAccount : public Account 
{
private:
    double interestRate;
public:
    SavingsAccount(int a,double b,double r) : Account(a,b) 
    {
        interestRate=r;
    }
    void display() override 
    {
        cout <<"[Savings] Account: " << accountNumber 
             <<", Balance: " << balance 
             <<", Interest Rate: "<<interestRate<< "%\n";
    }
};
class CurrentAccount : public Account 
{
private:
    double minbal;
public:
    CurrentAccount(int a,double b,double l):Account(a,b) 
    {
        minbal=l;
    }
    void display() override 
    {
        cout <<"[Current] Account: "<<accountNumber 
             <<", Balance: $"<<balance
             <<", Minimum Balance: "<<minbal<< "\n";
    }
};

int main() 
{
    SavingsAccount SA(1, 5000.0, 4.5);
    CurrentAccount CA(2, 15000.0, 2000.0);
    Account*Aptr1 = &SA;
    Account*Aptr2 = &CA;
    Aptr1->display();
    Aptr2->display();
    return 0;
}
