//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int>findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>Union;
        int i=0 ,j=0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(Union.size()==0 || Union.back()!=arr1[i]){
                    Union.push_back(arr1[i]);
                }
                 i++;   
                
            }else{
                if(Union.size()==0 || Union.back()!=arr2[j]){
                    Union.push_back(arr2[j]);
                }
                    j++;
            }
            }
            while(i<n){
                if(Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
                }
                i++;
            }
            while(j<m){
                if(Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
                }
                j++;
            }
                     
           return Union;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends