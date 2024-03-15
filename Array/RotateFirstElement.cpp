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
    cout << "The array after rotating the first element is :" << endl;
   int  temp=arr[0];
    for (int j = 1; j < i; j++)
    {
        arr[j-1]=arr[j];
        cout << arr[j]<<" ";
    }
    arr[i-1]=temp;
    cout<<arr[i-1];
    return 0;
}