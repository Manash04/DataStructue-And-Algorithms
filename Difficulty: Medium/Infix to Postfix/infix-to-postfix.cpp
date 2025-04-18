//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   // Priority of the operator
        
    int priority(char ch){
            if(ch == '^'){
                return 3;
            }else if(ch == '*' || ch=='/'){
                return 2;
            }else if(ch == '+' || ch=='-'){
                return 1;
            }else{
                return -1;
            }
        }
        
    string infixToPostfix(string& s) {
       
        int i=0;
        stack<char>st;
        string ans="";
        
        while(i<s.size()){
            // If we get alphanumeric char
            if((s[i]>='A' && s[i]<='Z') ||
            (s[i]>='a' && s[i]<='z') ||
            (s[i]>='0' && s[i]<='9')){
                ans+=s[i];
            }
            //If we get "("
            else if(s[i]=='('){
                st.push(s[i]);
            }
            // If we get ")"
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
            //If we get operator
            else{
                while(!st.empty() && priority(s[i])<=priority(st.top())){
                    ans+= st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }while(!st.empty()){
            ans+=st.top();
            st.pop();
        }return ans;
    }
};



//{ Driver Code Starts.
//   Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends