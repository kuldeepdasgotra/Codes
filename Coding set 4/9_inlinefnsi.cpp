#include <iostream>
using namespace std;
class Interest 
{
public:
    inline float calculateSI(float P, float R, float T) 
    {
        return (P * R * T) / 100;
    }
};
int main() 
{
    float a,b,c;
    cout<<"Enter the principal amount,rate of interest,and time period in years:";
    cin>>a>>b>>c;
    Interest obj;
    float P = a;
    float R = b;
    float T = c;
    float si = obj.calculateSI(P, R, T);
    cout << "P = " << P << endl;
    cout << "R = " << R << endl;
    cout << "T = " << T << endl;
    cout << "SI = " << si << endl;
    return 0;
}