#include<iostream>
#include<string>
using namespace std;
class Vehicle
{
    protected:
    int regno;
    string compname;
};
class car:public Vehicle
{
    private:
    string fueltype;
    double enginecapacity;
    
    public:
    void getdetails()
    {
        cout<<"Enter registration number:";
        cin>>regno;
        cout<<"Enter company name:";
        cin>>compname;
        cout<<"Enter fuel type:";
        cin>>fueltype;
        cout<<"Enter engine capacity:";
        cin>>enginecapacity;
    }
    void showdetails()
    {
        cout<<"Registration number:"<<regno<<endl;
        cout<<"Company name:"<<compname<<endl;
        cout<<"Fuel type:"<<fueltype<<endl;
        cout<<"Engine capacity:"<<enginecapacity<<endl;
    }
};
class bike:public Vehicle
{
    private:
    string fueltype;
    double enginecapacity;
    
    public:
    void getdetails()
    {
        cout<<"Enter registration number:";
        cin>>regno;
        cout<<"Enter company name:";
        cin>>compname;
        cout<<"Enter fuel type:";
        cin>>fueltype;
        cout<<"Enter engine capacity:";
        cin>>enginecapacity;
    }
    void showdetails()
    {
        cout<<"Registration number:"<<regno<<endl;
        cout<<"Company name:"<<compname<<endl;
        cout<<"Fuel type:"<<fueltype<<endl;
        cout<<"Engine capacity:"<<enginecapacity<<endl;
    }
};
int main()
{
    car C1,C2;
    bike B1,B2;
    cout<<"Enter vehicle details:"<<endl;
    cout<<"Car details:"<<endl;
    cout<<"For car 1:"<<endl;
    C1.getdetails();
    cout<<"For car 2:"<<endl;
    C2.getdetails();
    cout<<"Bike details:"<<endl;
    cout<<"For bike 1:"<<endl;
    B1.getdetails();
    cout<<"For bike 2:"<<endl;
    B2.getdetails();
    cout<<"Entered vehicle details are:"<<endl;
    cout<<"Car details:"<<endl;
    cout<<"For car 1:"<<endl;
    C1.showdetails();
    cout<<"For car 2:"<<endl;
    C2.showdetails();
    cout<<"Bike details:"<<endl;
    cout<<"For bike 1:"<<endl;
    C1.showdetails();
    cout<<"For bike 2:"<<endl;
    C2.showdetails();
    return 0;
}
