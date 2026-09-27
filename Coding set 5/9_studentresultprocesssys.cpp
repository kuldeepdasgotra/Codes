#include <iostream>
using namespace std;
template <class T>
class Result 
{
private:
    T marks[5];
public:
    Result(T m[5]) 
    {
        for(int i = 0;i<5;i++) 
        {
            marks[i] = m[i];
        }
    }
    T calculateTotal()
    {
        T total = 0;
        for(int i = 0; i < 5; i++) 
        {
            total += marks[i];
        }
        return total;
    }
    double calculateAverage() 
    {
        return (double)calculateTotal()/5.0;
    }
    T getHighest() 
    {
        T highest=marks[0];
        for(int i=1;i<5;i++) 
        {
            if(marks[i]>highest) 
            {
                highest = marks[i];
            }
        }
        return highest;
    }
    T getLowest() 
    {
        T lowest = marks[0];
        for(int i = 1; i < 5; i++) 
        {
            if(marks[i]<lowest) 
            {
                lowest = marks[i];
            }
        }
        return lowest;
    }
    void displayResult() 
    {
        cout<<"Total Marks: "<<calculateTotal()<<endl;
        cout<<"Average: "<<calculateAverage()<<endl;
        cout<<"Highest: "<<getHighest()<<endl;
        cout<<"Lowest: "<<getLowest()<<endl;
    }
};
int main() 
{
    int intMarks[5]={85, 90, 78, 92, 88};
    Result<int> student1(intMarks);
    cout<<"Student Result (Integer Marks):\n";
    student1.displayResult();
    cout<<endl;
    float floatMarks[5]={85.5, 90.0, 78.5, 92.5, 88.0};
    Result<float> student2(floatMarks);
    cout<<"Student Result (Float Marks):\n";
    student2.displayResult();
    return 0;
}
