/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    void dfs(TreeNode* node , vector<int>&ds , int level){
        if(node==NULL){
            return;
        }
        if(ds.size() == level){
            ds.push_back(node->val);
        }
        dfs(node->right , ds , level+1);
        dfs(node->left , ds , level+1);
        return;
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* node = root;
        vector<int>ds;
        int level =0;
        dfs(node , ds , level);
        return ds;
    }
};