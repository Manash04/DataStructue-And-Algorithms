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
    int findHeightL(TreeNode* root){
        int n = 0;
        while(root){
            n++;
            root = root->left;
        }return n;
    }
    int findHeightH(TreeNode* root){
        int n = 0;
        while(root){
            n++;
            root = root->right;
        }return n;
    }
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int lh = findHeightL(root);
        int rh = findHeightH(root);
        if(lh == rh){
            return (1<<lh) -1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};