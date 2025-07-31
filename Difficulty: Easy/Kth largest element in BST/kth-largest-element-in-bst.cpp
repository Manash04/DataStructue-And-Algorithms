/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
    
    void solve(Node* root , int k , int& idx , int& result){
        if(!root || idx >=k) return;
        solve(root->left , k , idx , result);
        idx++;
        if(idx == k){
            result = root->data;
            return;
        }
        solve(root->right , k , idx , result);
    }
    
    void FindN(Node* root , int& N){
        if(!root) return;
        FindN(root->left , N);
        N++;
        FindN(root->right , N);
    }
    
  public:
    int kthLargest(Node *root, int k) {
        // Your code here
        if(!root) return -1;
        int N = 1 , idx = 1;
        FindN(root , N);
        int result = -1;
        solve(root , N-k +1  , idx , result);
        return result;
    }
};