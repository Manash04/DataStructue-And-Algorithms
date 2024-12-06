class Solution {
public:
    bool isDigit(char ch) {
        return ch >= '0' && ch <= '9';
    }

    int myAtoi(std::string s) {
        int len = s.size();
        bool isnegative = false;

        if (len == 0)
            return 0;

        int i = 0;
        // Skip leading whitespace
        while (i < len && s[i] == ' ') {
            i++;
        }

        // Check for sign
        if (i < len && s[i] == '-') {
            isnegative = true;
            i++;
        } else if (i < len && s[i] == '+') {
            i++;
        }

        int result = 0;
        // Process digits
        while (i < len && isDigit(s[i])) {
            int digit = s[i] - '0';

            // Check for overflow
            if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && digit > 7)) {
                return isnegative ? INT_MIN : INT_MAX;
            }

            result = (result * 10) + digit;
            i++;
        }

        return isnegative ? -result : result;
    }
};