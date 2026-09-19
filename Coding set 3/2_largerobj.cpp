#include<iostream>
using namespace std;
class Student
{
    public:
    int Rollno,marks;
    
    Student(int r,int m)
    {
        Rollno=r;
        marks=m;
    }
    void displaydetails()
{
    cout<<"Roll number:"<<Rollno<<endl;
    cout<<"Marks:"<<marks<<endl;
}
};
Student findtop(Student S1,Student S2)
{
    
    if(S1.marks>S2.marks)
    {
       return S1;
    }
    else
    {
        return S2;
    }
}
int main()
{
    int a,b,c,d;
    cout<<"Enter Roll number of first student:";
    cin>>a;
    cout<<"Enter Marks of first student:";
    cin>>b;
    cout<<"Enter Roll number of second student:";
    cin>>c;
    cout<<"Enter Marks of second student:";
    cin>>d;
    Student S1(a,b);
    Student S2(c,d);
    Student highest=findtop(S1,S2);
    cout<<"Roll number nad marks of student with highest marks is:"<<endl;
    highest.displaydetails();
    return 0;
}