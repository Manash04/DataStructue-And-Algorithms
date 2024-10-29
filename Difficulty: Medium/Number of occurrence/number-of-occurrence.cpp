//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
   int FirstOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int First = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            if (nums[mid] == target) {
                First = mid;
                high = mid - 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return First;
    }

    int LastOccurence(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int Last = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            if (nums[mid] == target) {
                Last = mid;
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return Last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = FirstOccurence(nums, target);
        if (first == -1) {
            return {-1, -1};
        }
        int last = LastOccurence(nums, target);
        return {first, last};
    }
    
    int count(vector<int>& arr, int target) {
        // code here
        vector<int>ans =  searchRange(arr,  target);
        if(ans[0]==-1) return 0;
        else{
            return ans[1]-ans[0]+1;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.count(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends