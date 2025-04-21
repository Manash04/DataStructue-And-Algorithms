class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        for(int i=nums.size()-1; i>=0; i--){
            st.push(nums[i]);
        }

        vector<int>mpp(nums.size());
        for(int i=nums.size()-1; i>=0; i--){
            while(!st.empty() && nums[i]>= st.top()){
                st.pop();
            }
            if(!st.empty()){
                mpp[i]=st.top();
            }else{
                mpp[i] = -1;
            }
            st.push(nums[i]);
        }
        return mpp;
        
    }
};