/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        if(!root) return{};
        map<int,int>mpp;
        queue<pair<Node* , int>>pq;
        vector<int>ans;
        pq.push({root , 0});
        
        while(!pq.empty()){
            Node* node = pq.front().first;
            int col = pq.front().second;
            pq.pop();
            mpp[col] = node->data;
            if(node->left){
                pq.push({node->left , col-1});
            }
            if(node->right){
                pq.push({node->right , col+1});
            }
        }
        
        for(auto it: mpp){
            ans.push_back(it.second);
        }return ans;
    }
};