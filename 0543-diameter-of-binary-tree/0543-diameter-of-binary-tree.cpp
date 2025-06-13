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
    int check(TreeNode* node , int &maxi){
        if(node == NULL) return 0;
        int left = check(node->left , maxi);
        int right = check(node->right , maxi);
        maxi = max(maxi , left + right);
        return 1 + max(left , right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi =0;
        check(root , maxi);
        return maxi;
    }
};