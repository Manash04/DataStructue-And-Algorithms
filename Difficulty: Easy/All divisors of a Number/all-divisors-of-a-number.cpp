//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    void print_divisors(int n) {
        vector<int>extra;
        for(int i=1; i*i <= n; i++){
            if(n%i==0){
                cout<<i<<" ";
                if(i!=n/i){
                    extra.push_back(n/i);
                }
            }
        }
        
        for(int i= extra.size()-1; i>=0; i--){
            cout<<extra[i]<<" ";
        }
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends