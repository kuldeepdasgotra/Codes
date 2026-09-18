#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:
    string employeename;
    double basicsalary;

    public:
    double hra,da,gsalary;
    Employee(string e,double b)
    {
        cout<<"Constructor used";
        employeename=e;
        basicsalary=b;
    }
    void gethra()
    {
        hra=0.20*basicsalary;
        cout<<"HRA:"<<hra<<endl;
    }
    void getda()
    {
        da=0.10*basicsalary;
        cout<<"DA:"<<da<<endl;
    }
    void displaygrosssalary()
    {
        gsalary=basicsalary+hra+da;
        cout<<"Gross salary:"<<gsalary<<endl;
    }
};
int main()
{
    string a;
    double b;
    cout<<"Enter Employee name:";
    getline(cin,a);
    cout<<"Enter basic salary:";
    cin>>b;
    Employee E1(a,b);
    E1.gethra();
    E1.getda();
    E1.displaygrosssalary();
    return 0;    
}