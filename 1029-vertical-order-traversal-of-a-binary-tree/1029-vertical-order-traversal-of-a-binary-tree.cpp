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
    map<int, map<int, multiset<int>>> mpp;
    void solve(TreeNode* node, int col, int row) {
        if (!node)
            return;
        mpp[col][row].insert(node->val);
        solve(node->left, col - 1, row + 1);
        solve(node->right, col + 1, row + 1);
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root, 0, 0);
        vector<vector<int>> vp;
        for (auto m1 : mpp) {
            vector<int> temp;
            for (auto m2 : m1.second) {
                for (auto m3 : m2.second) {
                    temp.push_back(m3);
                }
            }
            vp.push_back(temp);
        }
        return vp;
    }
};