#include<iostream>
#include<string>
using namespace std;
class Text
{
    private:
    string str;

    public:
    int count=0;
    Text(string s)
    {
        str=s;
    }
    void strlen()
    {
        while(str[count]!='\0')
        {
            count++;
        }
        cout<<"Length of string is:"<<count<<endl;
    }
};
int main()
{
    string b;
    cout<<"Enter a string:";
    getline(cin,b);
    Text T1(b);
    T1.strlen();
    return 0;    
}