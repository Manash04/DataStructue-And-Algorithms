// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        double result = 0.0;
        vector<pair<double , int>>vp;
        for(int i=0; i<val.size(); i++){
            vp.push_back({(double)val[i]/wt[i] , i});
        }
        sort(vp.rbegin() , vp.rend());
        
        for(int i=0; i<val.size() && capacity>0; i++){
            int ind = vp[i].second;
            if(capacity>=wt[ind]){
            capacity -= wt[ind];
            result+= val[ind];
            }else{
                result+=vp[i].first*capacity;
                capacity =0;
            }
        }return result;
        
    }
};
