#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    if (d >= 0 && d <= n)
    {
        reverse(arr, arr + d);
        reverse(arr + d,arr+n);
        reverse(arr, arr + n);
         cout << "Array after rotating " << d << " positions to the right:" << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
    }
    else
    {
        cout << "Entered invalid entry";
    }
    return 0;
}
