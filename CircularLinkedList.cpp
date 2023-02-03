#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next= NULL;
    }
    
};


bool isCircular(Node* head){
    Node* temp =head;
    if (temp==NULL|| temp->next==NULL){
        return true;
    }
temp=temp->next;
    while(temp!=NULL&& temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Here because\t"<<temp<<"=="<<"NULL";
        return false;
    }
    else{
        return true;
    }
}









void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

void insertNode(Node* &head, int data){
    //no element
    if(head==NULL){
        Node* newNode = new Node(data);
        // cout<<newNode->data<<"\t";
        // cout<<newNode->next<<"\t";
        head=newNode;
        // cout<<head;
        print(head);
    }
    else{
        Node* temp=head;
        Node* prev=head;
        while(temp!=NULL){
            prev=temp;
            temp=temp->next;
        }
        Node* newNode = new Node(data);
        prev->next=newNode;
      
        print(head);
    }
}

int main()
{
    Node* head=NULL;
   
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 5);
    insertNode(head, 4);
    insertNode(head, 3);
    insertNode(head, 8);
    insertNode(head, 5);
    cout<<isCircular(head);
    
    return 0;
}
