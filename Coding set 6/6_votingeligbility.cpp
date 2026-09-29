#include<iostream>
using namespace std;
class AgeException:public exception
{
    public:
    const char* what()
    {
        return "Exception:Not eligible for voting";
    }
};
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    try
    {
        if(age<18)
        {
            throw AgeException();
        }
        cout<<"You are elgible for voting"<<endl;
    }
    catch(AgeException &a)
    {
        cout<<a.what()<<endl;
    }
    return 0;
}