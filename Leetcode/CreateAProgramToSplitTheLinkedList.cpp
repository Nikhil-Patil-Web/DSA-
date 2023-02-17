class Solution {
public:
    void reorderList(ListNode* head) {

        ListNode* prev=head;
        ListNode* head1=head;
        ListNode* head2=head->next;
        ListNode* current= head->next;
        ListNode* forward= current->next;
        while(current!=NULL){
            if(current!=NULL){
            prev->next=current->next;
            }
            if(forward!=NULL){
            current->next= forward->next;
            }
            int i=2;
            while(i--){
                prev=current;
                current=forward;
                if(forward!=NULL){
                    forward=forward->next;
                }
            }
        }
        current=head1;
        while(current!=NULL){
            cout<<current->val<<"\t";
            current=current->next;
        }
        current=head2;
        cout<<"\n";
        while(current!=NULL){
            cout<<current->val<<"\t";
            current=current->next;
        }
    }
};
