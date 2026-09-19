#include<iostream>
using namespace std;
class Bankaccount
{
    private:
    int accountno=0;
    double balance=0.0;
    
    public:
    Bankaccount(int a,double b)
    {
        accountno=a;
        balance=b;
    }
    void getdetails()
    {
        cout<<"Account number="<<accountno<<endl;
        cout<<"Balance="<<balance<<endl;
    }
    Bankaccount transfer(Bankaccount &receiver,double amount)
    {
        if(amount>balance)
        {
            cout<<"Transaction failed due to insufficient balance"<<endl;
        }
        else
        {
            balance-=amount;
            receiver.balance+=amount;
            cout<<"Transaction complete "<<amount<<" debited from your account"<<endl;
        }
    }
    void checkbalance()
    {
        cout<<"Bank account: "<<accountno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    int getvalue()
    {
       return accountno; 
    }
};
int main()
{
    int a1,a2,b;
    double c1,c2,d;
    cout<<"Enter account number of 1st person:";
    cin>>a1;
    cout<<"Enter balance:";
    cin>>c1;
    cout<<"Enter account number of 2nd person:";
    cin>>a2;
    cout<<"Enter balance:";
    cin>>c2;
    cout<<"Enter the amount to transfer:";
    cin>>d;
    cout<<"Enter the receiver bank account number:";
    cin>>b;
    Bankaccount B1(a1,c1);
    Bankaccount B2(a2,c2);
    if (b==B2.getvalue())
    {
        B1.transfer(B2,d);
    }
    else
    {
        cout<<"invalid account number";
    }
    B1.checkbalance();
    return 0;
}