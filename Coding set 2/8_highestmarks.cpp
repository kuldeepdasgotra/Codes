#include<iostream>
#include<string>
using namespace std;
class Marks
{
    private:
    int arr[5];

    public:
    int marks,highestmarks=0;
    Marks()
    {
        cout<<"Constructor used"<<endl;
        cout<<"Enter marks of 5 students:";
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
    void highest()
    {
        for (int i=0;i<5;i++)
        {
            if(arr[i]>highestmarks)
            {
                highestmarks=arr[i];
            }
        }
    }
    void dispresult()
    {
        cout<<"Highest marks:"<<highestmarks<<endl;
    }
};
int main()
{
    Marks M1;
    M1.highest();
    M1.dispresult();
    return 0;
}