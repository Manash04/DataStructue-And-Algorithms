#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array :";
    cin >> n;

    int arr[n];
    cout << "Enter the values in the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The entered arrray is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // coping the non zero elements from the arr to temp

    int temp[n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    // making all the values in the array to zero

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    // coping back all the non zero elements from the temp to arr
    
    for (int i = 0; i < index; i++)
    {
        arr[i] = temp[i];
    }
    cout << "The modified array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}