// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        vector<int>arr{1,2,5,10,20,50,100,200,500,2000};
        vector<int>result;
        for(int i=arr.size()-1;i>=0 && N>0;i--){
            while(N>=arr[i]){
                N-=arr[i];
                result.push_back(arr[i]);
            }
        }return result;
    }
};