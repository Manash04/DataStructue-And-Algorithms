class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for(int i=n-1;i>=0;i--){
            int m=num[i];
            if(m%2!=0){
                return num.substr(0, i+1);
            }
            
        }return  "";
        
    }
};