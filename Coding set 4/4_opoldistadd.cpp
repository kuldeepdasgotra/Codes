#include <iostream>
using namespace std;
class Distance 
{
private:
    int feet;
    int inches;
public:
    Distance(int f,int i) 
    {
       feet=f;
       inches=i;
    }
    void normalize() 
    {
        if (inches >= 12) 
        {
            feet += inches / 12;
            inches = inches % 12;
        }
    }
    Distance operator+(Distance &d) 
    {
        return Distance(feet + d.feet, inches + d.inches);
    }
    void display()
    {
        std::cout << feet << " ft " << inches << " in\n";
    }
};
int main() 
{
    int a,b,c,d;
    cout<<"Enter the value of feet and inches of first distance:";
    cin>>a>>b;
    cout<<"Enter the value of feet and inches of second distance:";
    cin>>c>>d;
    Distance d1(a,b);
    Distance d2(c,d);
    Distance sum = d1 + d2;
    sum.normalize();
    sum.display();
    return 0;
}
