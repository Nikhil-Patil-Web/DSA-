/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* flyodDetectLoop(Node* &head){
    Node* fast=head;
    Node* slow=head;
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return NULL;
    }
    else{
        while(fast!=NULL and slow!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }

} 

Node *getStartingNode(Node* &head){

    Node* intersection = flyodDetectLoop(head);
    Node *temp = head;
    if(intersection==NULL){
        return NULL;
    }
    while(temp!=intersection){
        temp=temp->next;
        intersection=intersection->next;
    }
    return intersection;

}


Node *removeLoop(Node *head)
{
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return NULL;
    }
    else{
        Node* startOfLoop= getStartingNode(head);
        if(startOfLoop==NULL){
            return head;
        }
        Node* temp =startOfLoop;
        while(temp->next!=startOfLoop){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
}
