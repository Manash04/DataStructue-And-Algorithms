#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the values of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int large=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>large)
        large=arr[i];
    }
    cout<<"The largest element in the array is: "<<large;


return 0;
}