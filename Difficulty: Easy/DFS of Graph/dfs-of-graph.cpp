class Solution {
    public:
    void dfsGraph(int node , vector<int>&visit , vector<int>&ans , vector<vector<int>>& adj){
        visit[node] =1;
        ans.push_back(node);
        for(auto& it: adj[node]){
            if(visit[it]==0){
                dfsGraph(it , visit , ans , adj);
            }
        }return;
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        vector<int>visit(v,0);
        vector<int>ans;
        visit[0]=1;
        
        dfsGraph(0 , visit , ans , adj);
        return ans;
        
        
    }
};