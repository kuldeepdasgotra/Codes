#include<iostream>
#include<string>
using namespace std;
class wdexceedexception: public exception
{
    public:
    const char* what()
    {
        return "Error : Insufficient Balance";
    }
};
class Bankaccount
{
    private:
    double balance;
    
    public:
    Bankaccount()
    {
        cout<<"Enter balance:";
        cin>>balance;
    }
    void getdetails()
    {
        cout<<"Your bank balance is: "<<balance<<endl;
    }
    void withdraw()
    {
        double wd;
        cout<<"Enter the amount to be witdrawn:";
        cin>>wd;
        try
        {
            if(wd>balance)
            {
                throw wdexceedexception();
            }
        balance-=wd;
        cout<<"Remaining balance: "<<balance<<endl;
        }
        catch(wdexceedexception &w)
        {
            cout<<w.what()<<endl;
        }
    }
};

int main()
{
    string a;
    Bankaccount B1;
    cout<<"Enter cb to check balance and w to withdraw amount:";
    cin>>a;
    if(a=="cb")
    {
        B1.getdetails();
    }
    else
    {
        B1.withdraw();
    }
    return 0;
}