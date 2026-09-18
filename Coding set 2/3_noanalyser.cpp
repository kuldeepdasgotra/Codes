#include<iostream>
using namespace std;
class Number
{
    private:
    int num;

    public:
    int count=0;
    void input(int n)
    {
        num=n;
    }
    void iseven()
    {
        if (num%2==0)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    void displayresult()
    {
        if(count==1)
        {
            cout<<"Entered number is even";
        }
        else
        {
            cout<<"Entered number is  not even";
        }
    }
};
int main()
{
    int a;
    cout<<"Enter a positive integer:";
    cin>>a;
    Number N1;
    N1.input(a);
    N1.iseven();
    N1.displayresult();
    return 0;
}