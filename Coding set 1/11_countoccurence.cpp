#include <iostream>
using namespace std;

int main()
{
    int n, a[100], key, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            count++;
    }

    cout << "Occurrences = " << count;

    return 0;
}