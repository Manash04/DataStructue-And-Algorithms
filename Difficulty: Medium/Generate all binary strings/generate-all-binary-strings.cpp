//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:

    void GenerateBinary(int n , int pos , string str , vector<string>&result , bool prevOne){
        if(n==pos){
            result.push_back(str);
            return;
        }
        
        GenerateBinary(n , pos+1 , str + "0" , result , false);
        if(!prevOne){
            GenerateBinary(n , pos+1 , str + "1" , result , true);
        }
    }
    vector<string> generateBinaryStrings(int num){
        vector<string>result;
        if(num<=0) return result;
        GenerateBinary(num , 0 , "",result , false);
        return result;
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends