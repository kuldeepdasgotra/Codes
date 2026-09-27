#include <iostream>
using namespace std;
class B;
class A
{
private:
	int num1;
	public:
	void inputd(int g)
	{
	    num1=g;
	}
	friend int sum(A obj1,B obj2);
};
class B
{
private:
	int num2;
	
	public:
	void inputd(int h)
	{
	    num2=h;
	}
	friend int sum(A obj1,B obj2);
};

int sum(A obj1,B obj2)
{
	return obj1.num1+obj2.num2;
}
int main()
{
	int p,q;
	cout<<"Enter first number:";
	cin>>p;
	cout<<"Enter second number:";
	cin>>q;
	A obj1;
	obj1.inputd(p);
	B obj2;
	obj2.inputd(q);
	int res=sum(obj1,obj2);
	cout<<"The sum is "<<res;
	return 0;
}