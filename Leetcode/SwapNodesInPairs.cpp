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

void swapF(ListNode* &current, ListNode* &prev){
    int temp= current->val;
    current->val = prev->val;
    prev->val= temp;

}
ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = head;
        if(current!=NULL){
        current=current->next;
        }
        while(current!=NULL){
            swapF(current, prev);
            prev=current;
            if(current!=NULL){
            current=current->next;
            }
            prev=current;
            if(current!=NULL){
            current=current->next;
            }
        }
        prev= head;
        while(prev!=NULL){
            cout<<prev->val<<"\t";
            prev=prev->next;
        }
        cout<<"\n";
        return head;
        
    }
};
