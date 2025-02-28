//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int N) {
vector<int>factors;
        vector<bool>prime(N +1 , true);
        prime[0]=false;
        prime[1]=false;
        
        for(int i=2 ; i*i<=N ; i++){
            if(prime[i]){
                for(int j=i*i;j<=N;j+=i){
                    prime[j]=false;
                }
            }
        }
        int num = N;
        for(int i=2; i<=N; i++){
            if(prime[i]){
                while(num%i==0){
                    factors.push_back(i);
                    num/=i;
                }
            }
        }return factors;
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends