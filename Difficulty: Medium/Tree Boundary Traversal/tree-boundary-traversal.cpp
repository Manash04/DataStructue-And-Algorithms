/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    
    bool isLeaf(Node* root){
        return !root->left && !root->right;
    }
    
    void addLeft(Node* root , vector<int>&ans){
        Node* cur = root->left;
        while(cur){
            if(!isLeaf(cur)) ans.push_back(cur->data);
            if(cur->left) cur = cur->left;
            else{
                cur = cur->right;
            }
        }
    }
     void addLeaf(Node* root , vector<int>&ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
        }
        if(root->left) addLeaf(root->left , ans);
        if(root->right) addLeaf(root->right , ans);
    }
     void addRight(Node* root , vector<int>&ans){
        Node* cur = root->right;
        vector<int>temp;
        while(cur){
            if(!isLeaf(cur)) temp.push_back(cur->data);
        if(cur->right){
            cur=cur->right;
        }else{
            cur=cur->left;
        }
        }
        
        for(int i=temp.size()-1; i>=0; i--){
            ans.push_back(temp[i]);
        }
        
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(!root) return ans;
        if(!isLeaf(root)) ans.push_back(root->data);
        addLeft(root , ans);
        addLeaf(root , ans);
        addRight(root , ans);
        return ans;
    }
};