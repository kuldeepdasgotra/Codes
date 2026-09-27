#include<iostream>
#include<string>
using namespace std;
class Book
{
    protected:
    string title,author;
    
    public:
    void getdetails()
    {
        cout<<"Enter Book Title:";
        cin>>title;
        cout<<"Enter Author name:";
        cin>>author;
    }
    void display()
    {
        cout<<"Book Title:"<<title<<endl;
        cout<<"Author name:"<<author<<endl;
    }
};
class Ebook: public Book
{
    private:
    double fsize;
    string fformat;
    
    public:
    void getdetails()
    {
        Book::getdetails();
        cout<<"Enter file size:";
        cin>>fsize;
        cout<<"Enter file format:";
        cin>>fformat;
    }
    void display()
    {
        Book::display();
        cout<<"File size:"<<fsize<<endl;
        cout<<"File format:"<<fformat<<endl;
    }
};
int main()
{
    int s=3;
    Ebook library[s];
    cout<<"Input details:"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"For Ebook "<<i+1<<":"<<endl;
        library[i].getdetails();
    }
    cout<<"------------------------------------"<<endl;
    cout<<"Stored books data:"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"Ebook "<<i+1<<":";
        library[i].display();
        cout<<"------------------------------------"<<endl;
    }
    return 0;
}