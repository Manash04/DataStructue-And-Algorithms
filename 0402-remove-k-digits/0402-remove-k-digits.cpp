class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if(k>n) return "";
        if(k==n) return "0";

        stack<char>st;
        for(int i=0; i<n; i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }

        string str = "";
        while(!st.empty()){
            str+= st.top();
            st.pop();
        }

        reverse(str.begin() , str.end());

        int i=0;
        while(i < str.size() && str[i]=='0'){
            i++;
        }

        str = str.substr(i);
        if(str.empty()){
            return "0";
        }else{
            return str;
        }

    }     
};