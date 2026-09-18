#include<iostream>
using namespace std;
class Rectangle
{
    private:
    double length,breadth;

    public:
    double area;
    void input(double l,double b)
    {
        length=l;
        breadth=b;
    }
    void calculatearea()
    {
        area=length*breadth;
    }
    void displayarea()
    {
        cout<<"Area of Rectangle with given dimensions is :"<<area<<endl;
    }
};
int main()
{
    double a,b;
    cout<<"Enter Length of rectangle:";
    cin>>a;
    cout<<"Enter Breadth of rectangle:";
    cin>>b;
    Rectangle R1;
    R1.input(a,b);
    R1.calculatearea();
    R1.displayarea();
    return 0;
}