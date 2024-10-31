//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int Calc(int n,int m,  int mid){
	    long long result=1;
	    for(int i=1; i<=n;i++){
	        result=result*mid;
	        if(result>m) return 2;
	  	    }
	        if(result==m) return 1;
	        return 0;
	}
	
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1, high=m; 
	    while(low<=high){
	        int mid= low+(high-low)/2;
	        long long power= Calc(n,m,mid);
	        if(power==1) return mid;
	        else if(power==0) low=mid+1;
	        else{
	        high=mid-1;
	            
	        }

	    }return -1;
	       
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends