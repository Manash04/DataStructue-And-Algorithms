class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for(char c: s){
            if(isalnum(static_cast<unsigned char>(c))){
            result+= tolower(static_cast<unsigned char>(c));
        }
        }
        int left =0;
        int right = result.size()-1;
        while (left < right) {
            if (result[left] != result[right]) {
                return false;
            }
        left++;
        right--;
        }
        return true;
}
};