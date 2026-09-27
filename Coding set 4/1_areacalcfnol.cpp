#include<iostream>
#include<string>
using namespace std;
class Area
{
 private:
 int a,b;
 float c;
 
 public:
 int calculate(int a)
 {
     return (a*a);
 }
 int calculate(int a,int b)
 {
     return (a*b);
 }
 float calculate(float c)
 {
     return ((22/7)*c*c);
 }
};
int main()
{
    Area A1;
    string i;
    string a="c";
    string b="r";
    string c="s";
    cout<<"Enter 'c' for circle, 'r' for rectangle and 's' for square:";
    cin>>i;
    if(i==a)
    {
        float p,q;
        cout<<"Enter the radius of circle:";
        cin>>p;
        q=A1.calculate(p);
        cout<<"Area of circle with given radius is:"<<q;
    }
    else if(i==b)
    {
        int p,q,r;
        cout<<"Enter the length of rectangle:";
        cin>>p;
        cout<<"Enter the breadth of rectangle:";
        cin>>q;
        r=A1.calculate(p,q);
        cout<<"Area of rectangle with given dimensions is:"<<r;
    }
    else
    {
        int p,q;
        cout<<"Enter the length of side of square:";
        cin>>p;
        q=A1.calculate(p);
        cout<<"Area of square with given side is:"<<q;
    }
    return 0;
}