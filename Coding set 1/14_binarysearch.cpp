#include <iostream>
using namespace std;

int main()
{
    int n, a[100], key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int found = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";

    return 0;
}