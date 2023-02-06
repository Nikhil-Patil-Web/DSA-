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
    int pairSum(ListNode* head) {
        vector<int> ar;
        int max=INT_MIN;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp!=NULL){
                ar.push_back(temp->val);
            }
            temp=temp->next;
        }
        for(int i=0; i<ar.size()/2; i++){
            int sum= ar[i]+ar[ar.size()-1-i];
            if(sum>max){
                max=sum;
            }
        }
        return max;
        
    }
};
