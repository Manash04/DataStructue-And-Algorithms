class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen; // To store the elements we have seen
        
        for (int num : arr) {
            // Check if double the current number exists in the set
            if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
                return true;
            }
            seen.insert(num); // Insert the current number into the set
        }
        
        return false; // No such pair found
    }
};