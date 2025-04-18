//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string>st;
        string first="";
        string second = "";
        string temp="";
        
        for(int i=pre_exp.size()-1; i>=0; i--){
            if((pre_exp[i]>='A' && pre_exp[i]<='Z') ||
            (pre_exp[i]>='a' && pre_exp[i]<='z') ||
            (pre_exp[i]>='0' && pre_exp[i]<='9')){
                st.push(string(1,pre_exp[i]));
            }else{
                first = st.top();
                st.pop();
                second = st.top();
                st.pop();
                temp = "(" + first + pre_exp[i] + second + ")";
                st.push(temp);
            }
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends