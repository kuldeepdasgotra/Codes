#include<iostream>
#include<string>
using namespace std;
class Bankaccount
{
    private:
    int accno;
    double balance;
    
    public:
    double dep,wd;
    Bankaccount(int a, double b)
    {
        accno=a;
        balance=b;
    }
    void deposit(double d)
    {
        dep=d;
        balance+=dep;
    }
    void withdraw(double w)
    {
        wd=w;
        if (wd>balance)
        {
            cout<<"insufficient balance ";
        }
        else
        {
            balance-=wd;
        }
    }
    void checkbalance()
    {
        cout<<"your current balance is:"<<balance;
    }
};
int main()
{
    int n;
    double e,f,g;
    string a1="wd",b1="dep",c1="cb",a2="exit",b2;
    cout<<"Ener acc no.:";
    cin>>n;
    cout<<"Enter balance :";
    cin>>e;
    Bankaccount B1(n,e);
    cout<<"input wd for withdrawal,dep for deposit,cb to check balance and exit to exit:";
    cin>>b2;
    if(b2==a1)
    {
        cout<<"Enter amount for withdrawal:";
        cin>>f;
        B1.withdraw(f);
        cout<<"Balance:";
        B1.checkbalance();
    }
    else if(b2==b1)
    {
        cout<<"Enter amount to deposit:";
        cin>>g;
        B1.deposit(g);
        cout<<"Balance:";
        B1.checkbalance();
    }
    else if(b2==c1)
    {
        B1.checkbalance();
    }
    else if(b2==a2)
    {
        return 0;
    }
     return 0;
}