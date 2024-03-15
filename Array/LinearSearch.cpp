#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int m;
    cout << "Enter the number you want to search: ";
    cin >> m;
    int index = -1; // Initialize index to -1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            index = i; // Update index when a match is found
            break;     // Exit the loop once a match is found
        }
    }
    if (index != -1)
    {
        cout << "The number " << m << " is found at index " << index << endl;
    }
    else
    {
        cout << "The number " << m << " is not found in the array." << endl;
    }
    return 0;
}
