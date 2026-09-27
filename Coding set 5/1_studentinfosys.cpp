#include<iostream>
#include<string>
using namespace std;
class Student
{
    protected:
    int rollno,age;
    string name;
    
    public:
    Student(int r,int a,string n)
    {
        rollno=r;
        age=a;
        name=n;
    }
    void displaydetails()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<rollno<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class Engineeringstudent: public Student
{
    private:
    string branch;
    int semester;
    
    public:
    Engineeringstudent(int r,string n,int a,int s,string b):Student(r,a,n)
    {
        branch=b;
        semester=s;
    }
    void displaydetails()
    {
        Student::displaydetails();
        cout<<"Branch:"<<branch<<endl;
        cout<<"Semester:"<<semester<<endl;
    }
};
int main()
{
    int r,a,s;
    string n,b;
    cout<<"Enter roll number of student:";
    cin>>r;
    cout<<"Enter name:";
    cin>>n;
    cout<<"Enter Age:";
    cin>>a;
    cout<<"Enter branch:";
    cin>>b;
    cout<<"Enter Semester:";
    cin>>s;
    Engineeringstudent E1(r,n,a,s,b);
    cout<<"---------Student Details--------";
    E1.displaydetails();
    return 0;
}