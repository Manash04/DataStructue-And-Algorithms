class Solution {
public:
    bool isValid(string s) {

        if (s.size() == 0 || s.size() == 1)
            return false;
        stack<char> st;

        for (auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else if (st.empty()) {
                return false;
            } else {
                char cur = st.top();
                if ((ch == ')' && cur == '(') || (ch == '}' && cur == '{') ||
                    (ch == ']' && cur == '[')){
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};