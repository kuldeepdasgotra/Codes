#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int index;
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter a index: ";
    cin>>index;
    try
    {
        if (index<0 || index>9)
        {
            throw out_of_range("out_of_range error");
        }
        cout<<"The element at given array index is: "<<arr[index]<<endl;
    }
    catch(out_of_range &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}