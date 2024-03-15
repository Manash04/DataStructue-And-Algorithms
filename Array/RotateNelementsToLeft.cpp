#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    if(d>=0 && d<=n){
        for(int j=0;j<d;j++){
            int temp=arr[0];
            for(int i=0;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            arr[n-1]=temp;
        }
        cout<<"Rotated array is: ";
for(int j=0;j<n;j++) {
    cout<<arr[j]<<" ";
    }
    cout<<endl;
    
} 
else{
    cout<<"Entered invalid entry";
}
  return 0;
}
