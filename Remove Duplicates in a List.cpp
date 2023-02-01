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

    void deleteNode(ListNode* &initial, ListNode* &final){
        ListNode* temp = final;
        if(initial!=NULL&& final!=NULL){
            initial->next=final->next;
            final=final->next;
            temp->next=NULL;
            delete temp;
        }
    }



    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* initial = head;
        ListNode* final = head->next;
        while(final!=NULL){
            while(initial!=NULL && final!=NULL && initial->val==final->val){
                deleteNode(initial, final);
            }
            if(initial!=NULL && final!=NULL){
                initial=initial->next;
                final=final->next;
            }
        }
        
return head;
    }
};
