#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char op;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter operator '+,-,/,*' :";
    cin>>op;
    cout<<"Enter second number:";
    cin>>n2;
    try
    {
        if(op != '+' && op != '-' && op != '/' && op != '*')
        {
            throw op;
        }
        if(op=='/' && n2==0)
        {
            throw n2;
        }
        switch(op)
        {
        case '+':cout<<n1<<" + "<<n2<<" = "<<n1+n2;
        break;
        case '-':cout<<n1<<" - "<<n2<<" = "<<n1-n2;
        break;
        case '*':cout<<n1<<" * "<<n2<<" = "<<n1*n2;
        break;
        case '/':cout<<n1<<" / "<<n2<<" = "<<n1/n2;
        break;
        }
    }
    catch(int a)
    {
        cout<<"Invalid! Division by zero error"<<endl;
    }
    catch(char o)
    {
        cout<<"Invalid operator"<<endl;
    }
    return 0;
}