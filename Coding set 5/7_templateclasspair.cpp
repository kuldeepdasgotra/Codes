#include <iostream>
using namespace std;
template <class T>
class Pair 
{
private:
    T value1;
    T value2;
public:
    Pair(T v1,T v2) 
    {
        value1=v1;
        value2=v2;
    }
    T getMax() 
    {
        return(value1>value2)?value1:value2;
    }
    T getMin() 
    {
        return(value1<value2)?value1:value2;
    }
    void display() 
    {
        cout<<"Maximum: "<<getMax()<<", Minimum: "<<getMin()<<endl;
    }
};
int main() 
{
    cout << "Integer Pair (15, 8):\n";
    Pair<int> intPair(15, 8);
    intPair.display();
    cout << "\nFloat Pair (3.14, 9.81):\n";
    Pair<float> floatPair(3.14, 9.81);
    floatPair.display();
    return 0;
}
