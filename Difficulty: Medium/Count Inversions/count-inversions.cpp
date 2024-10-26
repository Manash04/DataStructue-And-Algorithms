//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr,int l,int mid, int r  ){
      int left=l;
      int right = mid+1;
      int cnt = 0;
      vector<int>temp;
      while(left<=mid && right<=r){
          if(arr[left]<=arr[right]){
              temp.push_back(arr[left]);
              left++;
          }else{
              temp.push_back(arr[right]);
              cnt+=(mid-left+1);
              right++; 
          } 
      }
      while(left<=mid){
          temp.push_back(arr[left]);
          left++;
      }
      while(right<=r){
          temp.push_back(arr[right]);
          right++;
      }
      for(int i=0;i<temp.size();i++){
          arr[l+i]=temp[i];
      }return cnt;
      
  }
    int mergeSort(vector<int>& arr, int l, int r) {
        // code hereif
        int cnt=0;
        if(l>=r ) return 0;
        int mid=(l+r)/2;
        cnt+= mergeSort(arr , l , mid);
        cnt+= mergeSort(arr , mid+1, r);
        cnt+= merge(arr , l,mid,r);
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n=arr.size();
        return mergeSort(arr,  0, n-1) ;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends