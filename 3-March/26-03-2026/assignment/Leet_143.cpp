//Reorder List
/*
Example 1:
Input: head = [1,2,3,4]
Output: [1,4,2,3]

Example 2:
Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
*/

class Solution {
private:
     ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        while(curr!=NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        // find middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // split into two halves
        ListNode* head2 = slow->next;
        slow->next = nullptr;

        // reverse second half
        head2 = reverseList(head2);

        // merge alternating
        ListNode* curr = head;
        while (head2) {
            ListNode* temp1 = curr->next;
            ListNode* temp2 = head2->next;

            curr->next = head2;
            head2->next = temp1;

            curr = temp1;
            head2 = temp2;
        }
    }
};