class Solution {
  private:
  bool dfs(int node , int parent , vector<vector<int>>&adj , vector<int>&visit){
      visit[node] =1;
      for(auto it: adj[node]){
          if(!visit[it]){
              if(dfs(it , node , adj , visit)==true){
                  return true;
              }
          }else if(it != parent) return true;
      }
      return false;
  }
    
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>visit(V,0);
        for(int i=0; i<V; i++){
            if(!visit[i]){
                if(dfs(i , -1 , adj , visit)==true){
                    return true;
                }
            }
        }
        return false;
    }
};