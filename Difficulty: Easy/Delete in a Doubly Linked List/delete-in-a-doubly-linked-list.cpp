/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int k) {
        // Your code here
        if(!head){
            return nullptr;
        }
        int cnt =1;
        Node* temp = head;
        
        while(temp!=nullptr){
            if(cnt == k){
                // Deleting head
                if(temp == head){
                    head = head->next;
                    if(head){
                        head->prev = nullptr;
                    }
                    delete temp;
                    return head;
                }
                
                //Delete tail
                if(temp->next == nullptr){
                    temp->prev->next = nullptr;
                    temp->prev = nullptr;
                    delete temp;
                    return head;
                }
                
                // Delete in middle
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
                return head;
            }
            cnt++;
            temp = temp->next;
        }
    }
};