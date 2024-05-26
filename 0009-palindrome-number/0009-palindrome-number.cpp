class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int r=0;
        int original =x;
        while(x!=0){
            int digit = x % 10;
            x=x/10; 
if( r> INT_MAX/10||( r== INT_MAX/10 && digit>7))
return false;

            r= r*10 + digit;
        }

       return original==r;
    }
};