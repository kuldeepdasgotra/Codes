#include <iostream>
using namespace std;
class Integer
{
    private:
    int a,b;
    
    public:
    Integer(int p,int q)
    {
        a=p;
        b=q;
    }
    friend void larger(Integer I);
};
void larger(Integer I)
{
    if(I.a>I.b)
    {
        cout<<I.a<<" is larger"<<endl;
    }
    else 
    {
        cout<<I.b<<" is larger"<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    Integer i1(a,b);
    larger(i1);
    return 0;
}
