#include <iostream>
#include <string>
using namespace std;
class Product 
{
public:
    string name;
    double price;
    int quantity;
    Product(string n = "", double p = 0.0, int q = 0) 
    {
        name = n;
        price = p;
        quantity = q;
    }
    Product combineInventory(Product p2) 
    {
        Product combined;
        combined.name = name + " & " + p2.name;
        combined.price = (price + p2.price) / 2.0;
        combined.quantity = quantity + p2.quantity;
        return combined;
    }
    void display() 
    {
        cout << name << " - Qty: " << quantity << ", Total Value: " << (price * quantity) << endl;
    }
};
Product higherValue(Product p1, Product p2) 
{
    if ((p1.price * p1.quantity) > (p2.price * p2.quantity))
       { return p1;}
        else
        {
        return p2;
        }
}
int main() 
{
    Product p1("Apples", 2.5, 10);
    Product p2("Oranges", 3.0, 5);
    cout<<"Original inventory:"<<endl;
    p1.display();
    p2.display();
    cout<<"----------------------------------------"<<endl;
    Product val = higherValue(p1, p2);
    cout << "Higher Value Product: "; val.display();
    Product combined = p1.combineInventory(p2);
    cout << "Combined Inventory: "; combined.display();
    return 0;
}