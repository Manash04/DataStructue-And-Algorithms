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
        int maxCount = INT_MIN, maxInd=-1;
        for(int i=0;i<n;i++){
        int low=0, high = m-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[i][mid]==1){
                high=mid-1;
                if(m-mid > maxCount){
                    maxCount = m-mid;
                    maxInd = i;
                }
            }else{
                low=mid+1;
            }
        }
            
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