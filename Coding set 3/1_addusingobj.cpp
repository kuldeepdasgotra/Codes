#include<iostream>
using namespace std;
class Number
{
    private:
    int num;
    
    public:
    Number(int n)
    {
        num=n;
    }
    int getvalue()
    {
       return num; 
    }
};
Number add(Number N1,Number N2)
{
    return Number(N1.getvalue()+N2.getvalue());
}
int main()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    Number N1(a);
    Number N2(b);
    Number sum=add(N1,N2);
    int p=sum.getvalue();
    cout<<"The sum is:"<<p<<endl;
    return 0;
}