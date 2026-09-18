#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int rollno;
    string name;

    public:
    void setdata(int a,string b)
    {
        rollno=a;
        name=b;
    }
    void displaydata()
    {
        cout<<"Details entered are:"<<endl;
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }

};
int main()
{
    int c;
    string d;
    cout<<"Enter Roll number of student:";
    cin>>c;
    cout<<"Enter Name of student:";
    cin>>d;
    Student S1;
    S1.setdata(c,d);
    S1.displaydata();
    return 0;
}