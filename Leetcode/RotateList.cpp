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

void rotate(ListNode* &head){
    ListNode* current=head;
   ListNode* prev=current;
      current=current->next;
        int temp1= current->val;
        current->val=prev->val;
        while(current!=NULL){
            prev=current;
            current=current->next;
            if(current!=NULL){
            swap(temp1, current->val);
            }
        }
        head->val=temp1;
        current=head;
      
}
int count(ListNode* head){
    ListNode* temp= head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    return counter;
}

public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* current=head;
        ListNode* prev=head;
        if(k==0 || head==NULL){
            return head;
        }
        if(current!=NULL and current->next==NULL){
            return head;
        }
        int counter= count(head);
        k=k%counter;
        for(int i=0; i<k; i++){
            rotate(head);
        }
        
       return head; 
        
    }
};
