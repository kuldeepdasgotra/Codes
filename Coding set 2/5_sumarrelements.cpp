#include<iostream>
using namespace std;
class Arraysum
{
    private:
    int arr[10];

    public:
    int sum=0;
    Arraysum()
    {
        cout<<"Constructor used"<<endl;
        cout<<"Enter 10 integers to input in array:";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void findsum()
    {
        int temp;
        for(int i=0;i<10;i++)
        {
            temp=arr[i];
            sum+=temp;
        }
        cout<<"The sum of inputted elements is:"<<sum<<endl;
    }
};
int main()
{
    Arraysum A1;
    A1.findsum();
    return 0;
}