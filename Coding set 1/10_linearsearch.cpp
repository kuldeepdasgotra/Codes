#include <iostream>
using namespace std;

int main()
{
    int n, a[100], key;
    int position = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at index " << position;
    else
        cout << "Element not found";

    return 0;
}