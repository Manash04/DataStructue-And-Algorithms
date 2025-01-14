/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    int lengthLL(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL) {
            temp = temp -> next;
            count++;
        }

        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = lengthLL(head);

        if(len == 1)    return NULL;

        if(n == len) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }

        int pos = len - n + 1;

        ListNode* prev = NULL;
        ListNode* tempNode = head;

        while(pos != 1) {
            prev = tempNode;
            tempNode = tempNode -> next;
            pos--;
        }

            prev -> next = tempNode -> next;
            tempNode -> next = NULL;

            delete tempNode;

        return head;
    }
};