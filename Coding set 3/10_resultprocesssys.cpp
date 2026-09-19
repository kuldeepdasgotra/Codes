#include <iostream>
using namespace std;
class Result 
{
public:
    int rollNo;
    int marks[5];
    Result(int r = 0) 
    {
        rollNo = r;
        for(int i = 0; i < 5; i++) 
        {
            marks[i] = 0;
        }
    }
    void showdetails()
    {
        cout<<"Roll no:"<<rollNo<<endl;
        cout<<"Marks scored:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Subject"<<i+1<<": ";
            cout<<marks[i]<<endl;
        }
    }
    int getTotal() 
    {
        int sum = 0;
        for (int i = 0; i < 5; i++) 
        {
            sum += marks[i];
        }
        return sum;
    }
    void compareTotal(Result r2) 
    {
        int t1 = getTotal();
        int t2 = r2.getTotal();
        if (t1 > t2)
        {
             cout << "Roll " << rollNo << " has more marks." << endl;
        }
        else if (t2 > t1) 
        {
            cout << "Roll " << r2.rollNo << " has more marks." << endl;
        }
        else 
        {
            cout << "Both have equal marks." << endl;
        }
    }
};
Result findTopper(Result r1, Result r2, Result r3) 
{
    Result topper = r1;
    if (r2.getTotal() > topper.getTotal()) 
    {
        topper = r2;
    }
    if (r3.getTotal() > topper.getTotal()) 
    {
        topper = r3;
    }
    return topper;
}
Result applyGrace(Result r) 
{
    Result graded = r;
    int graceRemaining = 20; 
    for (int i = 0; i < 5; i++) 
    {
        if (graceRemaining <= 0) 
        {
            break;
        }
        int need = 40 - graded.marks[i];
        if (need > 0 && need <= 5 && graceRemaining >= need) 
        {
            graded.marks[i] += need;
            graceRemaining -= need;
        }
    }
    return graded;
}
int main() 
{
    Result res1(1), res2(2), res3(3);
    res1.marks[0] = 38; res1.marks[1] = 45; res1.marks[2] = 50; res1.marks[3] = 40; res1.marks[4] = 60;
    res2.marks[0] = 50; res2.marks[1] = 60; res2.marks[2] = 70; res2.marks[3] = 80; res2.marks[4] = 90;
    res3.marks[0] = 30; res3.marks[1] = 30; res3.marks[2] = 30; res3.marks[3] = 30; res3.marks[4] = 30;
    cout<<"Stored data:";
    res1.showdetails();
    res2.showdetails();
    res3.showdetails();
    cout<<"----------------------------------------------"<<endl;
    res1.compareTotal(res2);
    Result top = findTopper(res1, res2, res3);
    cout << "Topper Roll No: " << top.rollNo << endl;
    Result graced = applyGrace(res1);
    cout << "Graced Marks for Subject 1: " << graced.marks[0] << endl;
    return 0;
}
