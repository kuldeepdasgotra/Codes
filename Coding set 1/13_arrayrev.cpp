#include <iostream>
using namespace std;

int main()
{
    int n, a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}