//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int original= N;
        while(N!=0){
        int digit = N%10;
        N/=10;
        if(digit != 0 && original%digit==0){
            count++;
        // }else{
        //     return count;
        // }
            
        }
    }
            return count;
    }

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends