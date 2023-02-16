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
/* the following code is correct but it gives tle in longer cases*/

class Solution {
public:

void insert(int data, ListNode* &finalAns ){
    if(finalAns==NULL){
        finalAns= new ListNode(data);
    }
    else{
        ListNode* temp = new ListNode(data);
        temp->next= finalAns;
        finalAns=temp;
    }
}


    ListNode* removeNodes(ListNode* head) {
        stack<ListNode* > s;
        ListNode* finalAns=NULL;
        vector<int> ans;
        s.push(head);
        ListNode* temp=NULL;
        if(head!=NULL){
            temp=head->next;
        }
        while(temp!=NULL){
            int hold = temp->val;
            ListNode* holder = s.top();
            while(holder->val<hold and !s.empty()){
                cout<<"popping\t"<<holder->val<<"because"<<holder->val<<"<"<<hold<<"\n";
                s.pop();
                if(!s.empty()){
                holder=s.top();
                }
            }
            cout<<"pushing value\t"<<temp->val<<"\n";
            s.push(temp);
            temp=temp->next;
        }
        while(!s.empty()){
            if(s.top()!=NULL){
            ListNode* root = s.top();
            cout<<"Pushing\t"<<root->val<<"\n";
            ans.push_back(root->val);
            }
            s.pop();
        }
        for(int i=0; i<ans.size(); i++){
             insert(ans[i], finalAns);
        }
        return finalAns;
    }
};
