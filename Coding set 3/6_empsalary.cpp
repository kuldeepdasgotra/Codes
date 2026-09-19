#include <iostream>
#include <string>
using namespace std;
class Employee 
{
public:
    string name;
    double salary;
    void display() 
    {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};
Employee findHighestSalary(Employee arr[], int size) 
{
    Employee highest = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i].salary > highest.salary) 
        {
            highest = arr[i];
        }
    }
    return highest;
}
Employee giveIncrement(Employee emp) 
{
    Employee revised = emp;
    revised.salary = revised.salary + (revised.salary * 0.10);
    return revised;
}
int main() 
{
    Employee emps[3] = {{"Rohit", 50000}, {"Rahul", 60000}, {"Ramit", 55000}};
    cout<<"Employee details:"<<endl;
    for (int i=0;i<3;i++)
    {
        emps[i].display();
    }
    cout<<"--------------------------------------------------"<<endl;
    Employee top = findHighestSalary(emps, 3);
    cout << "Highest Paid: ";
    top.display();
    Employee promoted = giveIncrement(emps[0]);
    cout << "After Increment: ";
    promoted.display();
    return 0;
}
