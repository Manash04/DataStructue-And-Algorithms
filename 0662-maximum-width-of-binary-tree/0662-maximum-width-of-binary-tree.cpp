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
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        queue<pair<TreeNode* , unsigned long long>>q;
        q.push({root , 0});
        int ans = INT_MIN;

        while(!q.empty()){
            int size = q.size();
            unsigned long long mini = q.front().second;
            unsigned long long last , first;

            for(int i=0; i<size; i++){
                unsigned long long cur_id = q.front().second - mini;
                TreeNode* temp = q.front().first;
                q.pop();
                if(i==0) first = cur_id;
                if(i== size - 1) last = cur_id;
                if(temp->left){
                    q.push({temp->left , cur_id*2 + 1});
                }
                if(temp->right){
                    q.push({temp->right , cur_id*2 +2});
                }
            }
            ans = max(ans , (int)(last - first + 1));
        }return ans;
        
    }
};