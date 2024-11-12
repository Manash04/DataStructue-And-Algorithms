//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n1=arr1.size();
        int n2=arr2.size();
        if(n1>n2) return kthElement(k , arr2, arr1);
        int n=n1+n2;
        int left =k;
        int low = max(k-n2 , 0), high = min(k,n1);
        while(low<=high){
            int mid1=(low+high)/2;
            int mid2= left-mid1;
            int l1=INT_MIN, l2=INT_MIN;
            int r1=INT_MAX , r2=INT_MAX;
            if(mid1<n1) r1=arr1[mid1];
            if(mid2<n2) r2=arr2[mid2];
            if(mid1-1>=0) l1=arr1[mid1-1];
            if(mid2-1>=0) l2=arr2[mid2-1];
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }else if(l1>r2) high = mid1-1;
            else low = mid1+1;
            
        }return 0;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends