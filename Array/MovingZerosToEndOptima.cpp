#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The entered elements in the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    cout << "The array after moving the zeros to the end of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
