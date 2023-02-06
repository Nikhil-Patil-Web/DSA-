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

    bool isKandListEqual(ListNode* head, int k){
        
        while(k and head){
            head = head->next;
            k--;
        }

        return k == 0;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        if(k==1) return head;
        if(!isKandListEqual(head,k)) return head; 
        
        int count = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr != NULL && count < k){
            forward = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        if(forward != NULL){
            head-> next = reverseKGroup(forward,k);
        }

        return prev;
    }
};
