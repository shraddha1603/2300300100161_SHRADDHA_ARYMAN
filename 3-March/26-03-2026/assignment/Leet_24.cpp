//Swap Nodes in Pairs

/*
Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:
Input: head = [1,2,3]
Output: [2,1,3]
*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        ListNode* curr = head;
        while(curr && curr->next){
            ListNode* temp = curr->next;
            int a = curr->val;
            curr->val = temp->val;
            temp->val = a;
            curr = temp->next;
        }
        return head;

    }
};
