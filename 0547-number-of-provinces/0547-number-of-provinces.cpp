class Solution {
    void dfs(int i , vector<int>adj[] , vector<int>&visit){
        visit[i]=1;
        for(auto& it: adj[i]){
            if(visit[it]==0){
                dfs(it , adj , visit);
            }
        }return;
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int>visit(v,0);
        vector<int>adj[v];
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int cnt=0;
        for(int i=0; i<v; i++){
            if(visit[i]==0){
                cnt++;
                dfs(i , adj , visit);
            }
        }return cnt;
    }
};