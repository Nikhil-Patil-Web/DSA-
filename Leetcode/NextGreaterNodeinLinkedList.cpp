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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* current = head;
        ListNode* temp=NULL;
        while(current!=NULL){
            temp=current->next;
            while(temp!=NULL){
                if(temp!=NULL and temp->val > current->val){
                    ans.push_back(temp->val);
                    break;
                }
                else temp=temp->next;
            }
            if(temp==NULL){
                ans.push_back(0);
            }
            current=current->next;
        }
        return ans;
    }
};
