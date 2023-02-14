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


int count(ListNode* temp){
    int counter= 0;
    while(temp!=NULL){
        temp=temp->next;
        counter++;
    }
    return counter;
}
void chaloy(ListNode* &prev, ListNode* &current, ListNode* &ahead, ListNode* &actTail){
    int temp=-1;
    if(current!=NULL){
     int temp = current->val;
    }
    if(prev!=NULL){
    prev->next=ahead;
    }
    ListNode* newNode = new ListNode(current->val);
    actTail->next= newNode;
    actTail = actTail->next;
    if(prev!=NULL){
    prev= prev->next;
    }
    if(ahead!=NULL){
        current= ahead->next;
    }
    if(current!=NULL){
        ahead=current->next;
    }

}


    ListNode* findTail(ListNode* head){
        ListNode* temp = head;
        while(temp!=NULL and temp->next!=NULL){
            temp=temp->next;
        }
        return temp;
    }

    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head!=NULL and head->next==NULL){
            return head;
        }
        ListNode* tailVal=findTail(head);
        ListNode* actTail = tailVal;
        ListNode* current= head->next;
        ListNode * ahead= current->next;
        if(ahead==NULL){
            return head;
        }
        ListNode * prev= head;
        int counter= count(head);
        if(counter%2==1){

        while(current!=tailVal && prev!=tailVal){
            chaloy(prev, current, ahead, actTail);
        }
        }
        else{
             while(current!=tailVal && prev!=tailVal){
            chaloy(prev, current, ahead, actTail);
        }
        chaloy(prev, current, ahead, actTail);
        }
        return head;
    }
};
