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
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        if(!root) return {};
    map<int,int>mpp;
    queue<pair<Node* , int>>pq;
    pq.push({root , 0});
    
    while(!pq.empty()){
        Node* node = pq.front().first;
        int col = pq.front().second;
        pq.pop();
        if(mpp.find(col)==mpp.end()){
            mpp[col] = node->data;
        }
        if(node->left){
            pq.push({node->left , col-1});
        }
        if(node->right){
            pq.push({node->right , col+1});
        }
    }
    vector<int>ans;
    for(auto it: mpp){
        ans.push_back(it.second);
    }return ans;
    }
};