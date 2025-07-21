
class Solution {
    
    void dfs(int node , vector<int>adj[] , vector<bool>&visit , vector<int>&components){
            visit[node] = true;
            components.push_back(node);
            for(auto& it: adj[node]){
                if(!visit[it]){
                    dfs(it , adj , visit , components);
                }
            }
    }
  public:
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>adj[V];
        for(auto& it: edges){
            int u = it[0] , v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visit(V,false);
        vector<vector<int>>results;
        
        for(int i=0; i<V; i++){
            if(!visit[i]){
                vector<int>components;
                dfs(i , adj , visit , components);
                results.push_back(components);
            }
        }return results;
    }
};
