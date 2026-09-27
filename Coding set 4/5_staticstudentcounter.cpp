#include<iostream>
using namespace std;
class Student
{
    public:
    static int count;
    Student()
    {
        count++;
        cout<<"Student created"<<endl;
    }
    static void displayno()
    {
        cout<<"Total students="<<count;
    }
};
int Student::count=0;
int main()
{
    Student S1,S2,S3,S4;
    Student::displayno();
    return 0;
}