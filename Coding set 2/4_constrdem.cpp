#include<iostream>
#include<string>
using namespace std;
class Book
{
    private:
    string title,aname;
    
    public:
    Book(string t,string a)
    {
        cout<<"Parameterised constructor used"<<endl;
        title=t;
        aname=a;
    }
    void getdetails()
    {
        cout<<"Title name:"<<title<<endl;
        cout<<"Author name:"<<aname<<endl;
    }
};
int main()
{
    string p,q;
    cout<<"Enter the title of book:";
    cin>>p;
    cout<<"Enter author name:";
    cin>>q;
    Book B1(p,q);
    cout<<"Entered details are:";
    B1.getdetails();
    return 0;
}