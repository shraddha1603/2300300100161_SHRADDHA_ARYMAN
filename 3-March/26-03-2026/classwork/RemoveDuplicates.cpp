//Remove Duplicates from Doubly linked List
/*
Input:
n = 6
1<->1<->1<->2<->3<->4
Output:
1<->2<->3<->4
Explanation:
Only the first occurance of node with value 1 is 
retained, rest nodes with value = 1 are deleted
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp=head;
        
        while(temp!=NULL && temp->next!=NULL){
            
            Node* nextNode= temp->next;
            while(nextNode!=NULL && nextNode->data== temp->data){
                
                Node* duplicate= nextNode;
                nextNode=nextNode->next;
                
                delete duplicate;
            }
            
            temp->next=nextNode;
            if(nextNode) nextNode->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};