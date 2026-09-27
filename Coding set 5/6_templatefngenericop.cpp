#include <iostream>
using namespace std;
template <typename T>
T findLarger(T a, T b) 
{
    return (a > b) ? a : b;
}
template <typename T>
void swapval(T &a,T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int i1 = 10, i2 = 20;
    cout << "Larger of " << i1 << " and " << i2 << " is: " << findLarger(i1, i2) << endl;
    swapval(i1, i2);
    cout << "After swapping ints: i1=" << i1 << ", i2=" << i2 << "\n\n";

    float f1 = 5.5f, f2 = 2.2f;
    cout << "Larger of " << f1 << " and " << f2 << " is: " << findLarger(f1, f2) << endl;
    swapval(f1, f2);
    cout << "After swapping floats: f1=" << f1 << ", f2=" << f2 << "\n\n";

    double d1 = 12.345, d2 = 56.789;
    cout << "Larger of " << d1 << " and " << d2 << " is: " << findLarger(d1, d2) << endl;
    swapval(d1, d2);
    cout << "After swapping doubles: d1=" << d1 << ", d2=" << d2 << "\n\n";

    char c1 = 'A', c2 = 'Z';
    cout << "Larger of " << c1 << " and " << c2 << " is: " << findLarger(c1, c2) << endl;
    swapval(c1, c2);
    cout << "After swapping chars: c1=" << c1 << ", c2=" << c2 << endl;

    return 0;
}
