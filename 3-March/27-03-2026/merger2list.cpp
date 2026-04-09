//Merge 2 sorted Linked List (Leetcode problem 21)

//using array
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        vector<int> arr;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while (t1 != NULL) {
            arr.push_back(t1->val);
            t1 = t1->next;
        }

        while (t2 != NULL) {
            arr.push_back(t2->val);
            t2 = t2->next;
        }

        sort(arr.begin(), arr.end());

        ListNode* head = new ListNode(arr[0]);
        ListNode* current = head;

        for (int i = 1; i < arr.size(); i++) {
            current->next = new ListNode(arr[i]);
            current = current->next;
        }

        return head;
    }
};

//using dummy-node
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        if (list1 != NULL) current->next = list1;
        else current->next = list2;

        return dummy->next;
    }
};