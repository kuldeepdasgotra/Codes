#include <iostream>
using namespace std;
template <class T>
class Array 
{
private:
    T arr[5];
public:
    void inputelements(T elements[5]) 
    {
        for(int i = 0; i<5;i++) 
        {
            arr[i] = elements[i];
        }
    }
    void displayElements() 
    {
        cout << "Elements: ";
        for(int i = 0;i < 5;i++) 
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    T Largest() 
    {
        T maxVal=arr[0];
        for(int i = 1;i<5;i++) 
        {
            if(arr[i]>maxVal) 
            {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
    T Smallest() 
    {
        T minVal=arr[0];
        for(int i = 1;i<5;i++) {
            if(arr[i]<minVal)
            {
                minVal = arr[i];
            }
        }
        return minVal;
    }
};
int main() 
{
    Array<int> intArray;
    int intVals[5] = {12, 45, 7, 23, 56};
    intArray.inputelements(intVals);
    cout << "Integer Array:\n";
    intArray.displayElements();
    cout << "Largest: " << intArray.Largest() << ", Smallest: " << intArray.Smallest() << "\n\n";

    Array<float> floatArray;
    float floatVals[5] = {1.1f, 5.5f, 2.2f, 8.8f, 0.5f};
    floatArray.inputelements(floatVals);
    cout << "Float Array:\n";
    floatArray.displayElements();
    cout << "Largest: " << floatArray.Largest() << ", Smallest: " << floatArray.Smallest() << endl;
    return 0;
}
