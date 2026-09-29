#include<iostream>
using namespace std;
class InvalidMarksException:public exception
{
    public:
    const char* what()
    {
        return "Invalid Marks! Marks should be between 0 and 100";
    }
};
int main()
{
    int marks;
    cout<<"Enter the marks of student: ";
    cin>>marks;
    try
    {
        if(marks<0 || marks>100)
        {
            throw InvalidMarksException();
        }
        cout<<"\nEntered marks are:"<<marks<<endl;
    }
    catch(InvalidMarksException &i)
    {
        cout<<i.what()<<endl;
    }
    return 0;
}