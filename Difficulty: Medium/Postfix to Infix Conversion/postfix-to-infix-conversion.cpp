//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        int i=0;
        stack<string>st;
        string first="";
        string second = "";
        string temp = "";
        
        while(i<exp.size()){
            if((exp[i]>='A' && exp[i]<='Z')||
            (exp[i]>='a' && exp[i]<='z')||
            (exp[i]>='0' && exp[i]<='9')){
                st.push(string(1,exp[i]));
            }
            else{
                first = st.top();
                st.pop();
                second = st.top();
                st.pop();
                temp = "(" + second + exp[i] + first +")";
                st.push(temp);
            }
            i++;
        }return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends