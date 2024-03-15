#include<bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+size);
     cout << "Unique elements in the array: ";
     cout<<arr[0]<<" ";
    for (int i = 1; i < size; i++) {
        if(arr[i]!=arr[i-1])
        cout << arr[i] << " ";
    }
return 0;
}