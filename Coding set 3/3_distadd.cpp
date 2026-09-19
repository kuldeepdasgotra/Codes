#include <iostream>
using namespace std;
class Distance 
{
private:
    int feet;
    int inches;
public:
    void input(int f, int i) 
    {
        feet = f;
        inches = i;
    }
    Distance addDistance(Distance d2) 
    {
        Distance total;
        total.inches = inches + d2.inches;
        total.feet = feet + d2.feet + (total.inches / 12);
        total.inches = total.inches % 12;
        return total;
    }
    void display() 
    {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() 
{
    Distance d1, d2, d3;
    int a,b,c,d;
    cout<<"Enter feet for distance 1:";
    cin>>a;
    cout<<"Enter inches for distance 1:";
    cin>>b;
    cout<<"Enter feet for distance 2:";
    cin>>c;
    cout<<"Enter inches for distance 2:";
    cin>>d;
    d1.input(a,b);
    d2.input(c,d);
    d3 = d1.addDistance(d2);
    d3.display();
    return 0;
}
