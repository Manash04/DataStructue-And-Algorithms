#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = (dividend < 0) == (divisor < 0); 

        long m = abs((long)dividend);
        long n = abs((long)divisor);
        long quotient = 0;

        while (m >= n) {
            long temp = n, multiple = 1;
            while (m >= (temp << 1) && (temp << 1) > 0) { 
                temp <<= 1;
                multiple <<= 1;
            }
            m -= temp;
            quotient += multiple;
        }

        quotient = sign ? quotient : -quotient;

        return quotient > INT_MAX ? INT_MAX : (quotient < INT_MIN ? INT_MIN : quotient);
    }
};
