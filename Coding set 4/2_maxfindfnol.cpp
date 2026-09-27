#include<iostream>
using namespace std;
class Maximum
{
    private:
    int a,b,c;
    float d,e;
    
    public:
    void Max(int a,int b)
    {
        if (a>b)
        {
            cout<<a<<" is the maximum";
        }
        else
        {
            cout<<b<<" is the maximum";
        }
    }
    void Max(float d,float e)
    {
        if (d>e)
        {
            cout<<d<<" is the maximum";
        }
        else
        {
            cout<<e<<" is the maximum";
        }
    }
    void Max(int a,int b,int c)
    {
        if (a>b && a>c)
        {
            cout<<a<<" is the maximum";
        }
        else if(b>a && b>c)
        {
            cout<<b<<" is the maximum";
        }
        else
        {
            cout<<c<<" is the maximum";
        }
    }
};
int main()
{
    Maximum M1;
    int a,b,c,i,j;
    float d,e;
    cout<<"Enter the numbers of values to input:";
    cin>>i;
    if (i==2)
    {
        cout<<"Enter the 5 for integer type and 6 for float type";
        cin>>j;
        if(j==5)
        {
        cout<<"Enter the value of numbers:";
        cin>>a>>b;
        M1.Max(a,b);
        }
        else{
            cout<<"Enter the value of numbers:";
        cin>>d>>e;
        M1.Max(d,e);
        }
    }
    else
    {
        cout<<"Enter the value of numbers:";
        cin>>a>>b>>c;
        M1.Max(a,b,c);
    }
    return 0;
}