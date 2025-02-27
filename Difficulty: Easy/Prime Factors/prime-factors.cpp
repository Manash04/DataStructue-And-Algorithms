//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    vector<int>factor;
	    if(N<=1) return factor;
	    
	    if(N%2==0){
	        factor.push_back(2);
	        while(N%2==0){
	            N/=2;
	        }
	    }
	    
	    for(int i=3 ; i*i <= N; i+=2){
	        if(N%i == 0){
	            factor.push_back(i);
	            while(N%i == 0 ){
	                N/=i;
	            }
	        }
	    }
	    
	    if(N>1){
	        factor.push_back(N);
	    }return factor;
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends