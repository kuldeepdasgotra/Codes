#include<iostream>
#include<string>
using namespace std;
class Bankacc
{
    private:
    static int totalacc;
    int accno;
    string cname;
    
    public:
    Bankacc()
    {
        totalacc++;
    }
    void inputdetails(int a,string c)
    {
        accno=a;
        cname=c;
    }
    static void displaytotal()
    {
        cout<<"Total bank account created="<<totalacc<<endl;
    }
};
int Bankacc::totalacc=0;
int main()
{
    int m,n,o;
    string x,y,z;
    Bankacc b1,b2,b3;
     cout<<"Enter first acc number:";
        cin>>m;
        cout<<"Enter the Customer name:";
        cin>>x;
        cout<<"Enter second acc number:";
        cin>>n;
        cout<<"Enter the Customer name:";
        cin>>y;
        cout<<"Enter third acc number:";
        cin>>o;
        cout<<"Enter the Customer name:";
        cin>>z;
        b1.inputdetails(m,x);
        b2.inputdetails(n,y);
        b3.inputdetails(o,z);
    Bankacc::displaytotal();
    return 0;
}