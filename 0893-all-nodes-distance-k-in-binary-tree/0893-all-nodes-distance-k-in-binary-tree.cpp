/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void buildParent(TreeNode* root,
                     unordered_map<TreeNode*, TreeNode*>& parentMap) {
        if (!root)
            return;
        if (root->left) {
            parentMap[root->left] = root;
            buildParent(root->left, parentMap);
        }
        if (root->right) {
            parentMap[root->right] = root;
            buildParent(root->right, parentMap);
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parentMap;
        buildParent(root, parentMap);
        unordered_map<TreeNode*, bool> visit;

        queue<TreeNode*> q;
        q.push(target);
        visit[target] = true;
        int dist = 0;
        while (!q.empty()) {
            int size = q.size();
            if (dist == k) {
                vector<int> ans;
                while (!q.empty()) {
                    ans.push_back(q.front()->val);
                    q.pop();
                }
                return ans;
            }
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left && !visit[temp->left]) {
                    q.push(temp->left);
                    visit[temp->left] = true;
                }
                if (temp->right && !visit[temp->right]) {
                    q.push(temp->right);
                    visit[temp->right] = true;
                }
                if (parentMap.count(temp) &&
                    visit.find(parentMap[temp]) == visit.end()) {
                    q.push(parentMap[temp]);
                    visit[parentMap[temp]] = true;
                }
            }
            dist++;
        }
        return {};
    }
};