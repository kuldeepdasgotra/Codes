#include <iostream>
using namespace std;
class Rectangle 
{
public:
    int length;
    int width;
    Rectangle(int l = 0, int w = 0) 
    {
        length = l;
        width = w;
    }
    bool isEqualArea(Rectangle r2) 
    {
        return (length * width) == (r2.length * r2.width);
    }
};
Rectangle mergeRect(Rectangle r1, Rectangle r2) 
{
    Rectangle newRect;
    newRect.length = r1.length + r2.length;
    newRect.width = r1.width + r2.width;
    return newRect;
}
int main() 
{
    int a,b,c,d;
    cout<<"Enter length of first rectangle:";
    cin>>a;
    cout<<"Enter breadth of first rectangle:";
    cin>>b;
    cout<<"Enter length of second rectangle:";
    cin>>c;
    cout<<"Enter breadth of second rectangle:";
    cin>>d;
    Rectangle rect1(a, b), rect2(c, d);
    if (rect1.isEqualArea(rect2))
    {
        cout << "Areas are equal." << endl;
    }
    else
    {
        cout << "Areas are not equal." << endl;    
    }
    Rectangle rect3 = mergeRect(rect1, rect2);
    cout << "Merged -> Length: " << rect3.length << ", Width: " << rect3.width << endl;
    return 0;
}