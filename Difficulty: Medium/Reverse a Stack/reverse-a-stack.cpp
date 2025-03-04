//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    void Insert(stack<int>& St , int num){
    if(St.empty()){
        St.push(num);
        return;
    }    
    int temp = St.top();
    St.pop();
    Insert(St , num);
    St.push(temp);
    }
    
    void ReverseFn(stack<int>& St){
    if(St.empty()) return;
    int temp = St.top();
    St.pop();
    ReverseFn(St);
    Insert(St , temp);
    }
    
    void Reverse(stack<int> &St){
        ReverseFn(St);
    }
};


//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends