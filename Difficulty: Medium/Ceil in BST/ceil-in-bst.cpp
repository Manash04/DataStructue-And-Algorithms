/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */

int findCeil(Node* root, int input) {
    // Your code here
    if(!root) return -1;
    int ans = INT_MAX;
    
    while(root!=NULL){
        if(root->data == input){
            return input;
        }else if(root->data > input){
            ans = min(ans , root->data);
            root = root->left;
        }else{
            root = root->right;
        }
    } if(ans == INT_MAX){
        return -1;
    }else{
        return ans;
    }
}