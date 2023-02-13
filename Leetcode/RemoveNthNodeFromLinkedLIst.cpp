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

void remove(ListNode* &head, int n){
    ListNode* prev;
    ListNode* temp=head;
    int counter=0;
    while(counter!=n-1){
        counter++;
        if(temp!=NULL){
        cout<<temp->val<<"\t";
        }
        prev=temp;
        temp=temp->next;  
    }
    if(prev!=NULL&&temp!=NULL){
        prev->next=temp->next;
    }
}


int count(ListNode* temp){
    int counter=0;
    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }
    return counter;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        if(head!=NULL and head->next==NULL and n==2){
            return head;
        }
         if(head!=NULL and head->next==NULL and n==1){
            return head->next;
        }
        else{
            int total= count(head);
            if(total-n+1==1){
                return head->next;
            }
            remove(head,total-n+1 );
        }
        return head;
    }
};
