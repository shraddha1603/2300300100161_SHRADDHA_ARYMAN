// using slow&fast
class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        Node *fast = head;
        Node *slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }return slow->data;
            }
              
        }
        return -1;
    }
};

//using HashMap
class Solution {
  public:
    bool detectLoop(Node* head) {
        map<Node*,int> mpp;
        Node* temp=head;
        while (temp != NULL) {
            if (mpp.find(temp) != mpp.end()) {
                return temp->data;
            }
            mpp[temp] = 1;
            temp = temp->next;
        }
        return -1;
    }
};