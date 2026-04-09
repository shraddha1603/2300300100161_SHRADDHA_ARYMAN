// Partition List
/*
Example 1:
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Example 2:
Input: head = [2,1], x = 2
Output: [1,2]
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         ListNode* beforeDummy = new ListNode(0);
        ListNode* afterDummy = new ListNode(0);

        ListNode* before = beforeDummy;
        ListNode* after = afterDummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->val < x) {
                before->next = curr;
                before = before->next;
            } else {
                after->next = curr;
                after = after->next;
            }
            curr = curr->next;
        }

        after->next = nullptr;
        before->next = afterDummy->next;

        ListNode* ans = beforeDummy->next;
        delete beforeDummy;
        delete afterDummy;

        return ans;
    }
};
