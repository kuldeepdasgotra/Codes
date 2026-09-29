#include<iostream>
#include<cmath>
using namespace std;
class Negativenumberexception
{
    public:
    const char* what()
    {
        return "Error:Square root of a negative number cannot be calculated.";
    }
};
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    try
    {
        if (a<0)
        {
            throw Negativenumberexception(); 
        }
        cout<<"Square root of given number is: "<<sqrt(a)<<endl;
    }
    catch(Negativenumberexception &b)
    {
        cout<<b.what()<<endl;
    }
    return 0;
}