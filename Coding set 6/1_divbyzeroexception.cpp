#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the dividend:";
    cin>>m;
    cout<<"Enter the divisor:";
    cin>>n;
    try
    {
        if(n==0)
        {
            throw "Error:Division by zero is not allowed";
        }
        cout<<"Result: "<<m/n<<endl;
    }
    catch (const char *a)
    {
        cout<<a<<endl;
    }
    return 0;
}