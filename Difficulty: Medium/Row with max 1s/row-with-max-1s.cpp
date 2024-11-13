//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int n=arr.size();
        int m=arr[0].size();
        int low=0 , high = m-1;
        int maxInd = -1;
        while(low<=high){
        bool status =false;
            int mid = (low+high)/2;
            for(int i=0; i<n;i++){
                if(arr[i][mid]==1){
                    maxInd=i;
                    high =mid-1;
                    status = true;
                    break;
                } 
            }
            if(status==false) low = mid+1;
        }return maxInd;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends