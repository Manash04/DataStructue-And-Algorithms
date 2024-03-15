#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cout << "Enter the size of the array: ";
    cin >> i;
    int arr[i];

    cout << "Enter the elements of the array: " << endl;
    for (int j = 0; j < i; j++)
    {
        cin >> arr[j];
    }
    cout << "The entered array is :" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << arr[j]<<" ";
    }
    return 0;
}