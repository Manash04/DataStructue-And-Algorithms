class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>>vp;
        for(int i=0; i<start.size(); i++){
            vp.push_back({start[i] , end[i]});
        }
        
        sort(vp.begin() , vp.end() , [](pair<int,int>a , pair<int,int>b){
            return a.second < b.second;
        });
        
        int cnt=1 , last =vp[0].second;
        for(int i=0; i<vp.size();i++){
            if(vp[i].first>last){
                cnt++;
                last = vp[i].second;
            }
        }return cnt;
    }
};