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
// ListNode* extract(ListNode* &head){
//   ListNode* temp = head;
//   ListNode* head_copy=NULL;
//   ListNode* tail=NULL;
//   while(temp!=NULL){
//       if(temp!=NULL and temp->val!=0){
//           ListNode* newNode = new ListNode(temp->val);
//           if(head_copy==NULL){
//               head_copy=newNode;
//               tail =newNode;
//           }
//           else{
//               cout<<"Here adding new node\t"<<newNode->val<<"\t after\t"<<tail->val;
//               tail->next=newNode;
//               tail=tail->next;
//           }
//       }
//       temp=temp->next;
//   }
//   return head_copy;
// }
   void convert(ListNode* &start, ListNode* end, ListNode* &ans, ListNode* &tail){
       ListNode* temp = start;
       int sum=0; 
       while(temp!=end){
           sum=sum+temp->val;
           temp=temp->next;
       }
       ListNode* newNode = new ListNode(sum);
       if(ans==NULL){
           ans=newNode;
           tail=ans;
       }
       else{
     
            if(tail!=NULL){
            tail->next=newNode;
            tail=newNode;
            }
           
       }
   }


    ListNode* mergeNodes(ListNode* head) {
        ListNode* start = head;
        ListNode* ans =NULL;
        ListNode* tail=NULL;
        ListNode* temp= start;
        if(start!=NULL){
            temp=start->next;
        }
        while(temp!=NULL){
            while(temp!=NULL and temp->val!=0){
                temp=temp->next;
            }
            convert(start, temp, ans, tail);
            start=temp;
            temp=start->next;
        }

        return ans;
    }
};
