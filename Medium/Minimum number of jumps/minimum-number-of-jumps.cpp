//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        
    if(n<=1) return 0;
    if(arr[0]==0) return -1;
    
    int maxReach = arr[0];
    int jumps = 1;
    int steps = arr[0];
    
    for(int i=1; i<n;i++){
        if(i==n-1) return jumps;
        
        
    maxReach = max(maxReach, i+arr[i]);
    steps--;
    
    if(steps==0){
        jumps++;
    
    
    if(i>= maxReach) return -1;
    steps = maxReach -i;
    }
    }
    return -1;
    
       
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends