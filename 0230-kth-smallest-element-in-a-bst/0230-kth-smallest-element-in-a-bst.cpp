/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    void solve(TreeNode* root, int k, int& ind, int& result) {
        if (!root || ind >= k) {
            return;
        }
        solve(root->left, k, ind, result);
        ind++;
        if (ind == k) {
            result = root->val;
            return;
        }
        solve(root->right, k, ind , result);

    }

public:
    int kthSmallest(TreeNode* root, int k) {
        if (!root)
            return -1;
        int ind = 0;
        int result = -1;
        solve(root, k, ind, result);
        return result;
    }
};