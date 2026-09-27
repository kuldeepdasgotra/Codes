#include<iostream>
#include<string>
using namespace std;
class Employee
{
    protected:
    int eid;
    string name;
    
    public:
    Employee(int id,string n)
    {
        name=n;
        eid=id;
    }
    void displaydetails()
    {
        cout<<"Employee ID:"<<eid<<endl;
        cout<<"Employee name:"<<name<<endl;
    }
};
class Manager: public Employee
{
    private:
    double salary;
    string department;
    
    public:
    Manager(int id,string n,double s,string d):Employee(id,n)
    {
        salary=s;
        department=d;
    }
    void displaydetails()
    {
        Employee::displaydetails();
        cout<<"Employee department:"<<department<<endl;
        cout<<"Employee salary:"<<salary<<endl;
    }
};
int main()
{
    Manager manag[5]
    {
        Manager(1,"rahul",50000.0,"revenue"),
        Manager(2,"rohit",80000.0,"IT"),
        Manager(3,"virat",30000.0,"records"),
        Manager(4,"surya",120000.0,"administration"),
        Manager(5,"neeraj",80000.0,"IT")
    };
    cout<<"Employee Details:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Details of Employee "<<i+1<<":"<<endl;
        manag[i].displaydetails();
        cout<<"-------------------------------"<<endl;
    }
    return 0;
}