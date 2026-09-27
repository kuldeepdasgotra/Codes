#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,imag;
    
    public:
    void inputval(int r,int i)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex C)
    {
        Complex result;
        result.real=real+C.real;
        result.imag=imag+C.imag;
        return result;
    }
    void showcomplex()
    {
        cout<<real<<"+"<<"i"<<imag;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the value of real and imaginary part of first complex number:";
    cin>>a>>b;
    cout<<"Enter the value of real and imaginary part of second complex number:";
    cin>>c>>d;
    Complex C1;
    C1.inputval(a,b);
    Complex C2;
    C2.inputval(c,d);
    cout<<"the sum of the given complex numbers is:";
    Complex C3=C1 + C2;
    C3.showcomplex();
    return 0;
    
}