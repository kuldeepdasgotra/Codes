#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,imag;
    void input(int r,int i)
    {
        real=r;
        imag=i;
    }
    Complex multiply(Complex C2)
    {
        int a,b,c,d;
        a=this->real;
        b=this->imag;
        c=C2.real;
        d=C2.imag;
        Complex C;
        C.real=(a*c)-(b*d);
        C.imag=(a*d)+(b*c);
        return C;
    }
    Complex add(Complex C3)
{
    Complex C5;
   int a,b;
   a=this->real+C3.real;
   b=this->imag+C3.imag;
   cout <<"After addition, complex number obtained is: "<<a<<" + "<<b<<"*i"  <<endl;
   return C5;
}
    void showdetails()
    {
        cout<<"After multiplication, complex number:"<<real<<" + "<<imag<<"*i"  <<endl;
    }
};
   Complex sub(Complex C1,Complex C2)
{
    Complex C;
   C.real=C1.real-C2.real;
   C.imag=C1.imag-C2.imag;
   cout <<"After subtraction, complex number obtained is: "<<C.real<<" + ("<<C.imag<<")*i"  <<endl;
   return C;
}
int main()
{
    int p,q,r,s;
    cout<<"Enter real part of first complex number:";
    cin>>p;
    cout<<"Enter imaginary part of first complex number:";
    cin>>q;
    Complex C7;
    C7.input(p,q);
    cout<<"Enter real part of second complex number:";
    cin>>r;
    cout<<"Enter imaginary part of second complex number:";
    cin>>s;
    Complex C8;
    C8.input(r,s);
    cout<<"-----------------------------------------------------"<<endl;
    C7.add(C8);
    cout<<"-----------------------------------------------------"<<endl;
    Complex C9=C7.multiply(C8);
    C9.showdetails();
    cout<<"-----------------------------------------------------"<<endl;
    Complex C10;
    C10=sub(C7,C8);
    cout<<"-----------------------------------------------------"<<endl;
    return 0;
}