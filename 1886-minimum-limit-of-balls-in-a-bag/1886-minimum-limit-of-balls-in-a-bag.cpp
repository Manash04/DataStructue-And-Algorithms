class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1;
        int high = 1e9;
        
        while(low < high){
            // mid is our bag limit. If it's 2, we can only split the bags into 
            // max balls of 2. So if we have a bag of 8 balls. We can split it into
            // 4 bags of 2 balls.
            int mid = low + (high - low) / 2;
            
            int splitOperations = 0;
            // if our bag limit is 3 and bag is 9.
            // we can divide it: (9-1)/3 times = 2.
            // if bag is less than limit, then it'll not increase count of bags
            // because we can't split that bag.
            // So, if bag limit is 2 and bag is 8. We can split 8 into bags of 2
            // 8-1/2=3 times.
            // if bag limit is 2, bag is 4. We can split 4-1/2=1 times.
            // 4-> 2,2
            // 8-> 2,6 then 6->2,4 then 4->2,2
            // So the number of times we split, is the number of operations we're making
            // we're only allowed maxOperations. So according to the bag limit,
            // find out how many operations we can do to split the bag into
            // bags of bag limit.
            for(auto bag: nums){
                splitOperations += (bag - 1)/mid;
            }
            // if our split operations require more splits than allowed,
            // we can try reducing the number of splits by increasing
            // bag limit
            if(splitOperations > maxOperations){
                low = mid + 1;
            } else {
                // if we're able to split bags into bag limit
                // and still not exceed the total allowed operations
                // we try to split even more bags by decreasing the bag limit
                // and see if we're able to split without exceeding the maximum
                // allowed split operations
                high = mid;
            }
            
        }
        
        return low;
    }
};