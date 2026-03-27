//using slow $ fast
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node *fast = head;
        Node *slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                int cnt=1;
                slow=slow->next;
                while(slow!=fast){
                    cnt++;
                    slow=slow->next;
                }
            return cnt;
            }
        }
        return 0;
    }
};