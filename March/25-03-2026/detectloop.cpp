//using hashmap
class Solution {
  public:
    bool detectLoop(Node* head) {
        map<Node*,int> mpp;
        Node* temp=head;
        while (temp != NULL) {
            if (mpp.find(temp) != mpp.end()) {
                return true;
            }
            mpp[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};

//using slow and fast
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
              return true;
        }
        return false;
    }
};