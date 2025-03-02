class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        if (i == n) {
            return 0;
        }
        
        bool negative = false;
        if (s[i] == '-' || s[i] == '+') {
            negative = (s[i] == '-');
            i++;
        }
        
        long long digit = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            digit = digit * 10 + (s[i] - '0');
            
            if (negative && -digit < INT_MIN) {
                return INT_MIN;
            }
            
            if (!negative && digit > INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        
        return negative ? -digit : digit;
    }
};