class Solution {
public:

    int SqrtRoot(int num){
        int low=0 , high = num;
        if(num==0) return 0;
        if(num==1) return 1;
        while(low<=high){
            int mid= low + (high-low)/2;
            long long root = (long long)mid*mid;
            if(root == num){
                return mid;
            }else if(root < num){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }return high;
    }
    long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<int>nums;
       for(auto it:gifts){
        nums.push(it);
       }
       while(k>0 && !nums.empty()){
        int largest = nums.top();
        nums.pop();
        int SqrtVal = SqrtRoot(largest);
        nums.push(SqrtVal);
        k--;
       }
       long long total =0;
    while(!nums.empty()){
        total+=nums.top();
        nums.pop();
    }return total;
    }
};