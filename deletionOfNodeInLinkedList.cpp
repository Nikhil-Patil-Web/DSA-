
#include <iostream>

using namespace std;


class Node {
    public: 
    int data;
    Node *next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
    
};


void print (Node* &head){
    cout<<"Printing the updated list\n";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}



void deleteAtPosition(Node* &head, int position){
    
    int i=1;
    Node* curr=head;
    Node*temp=NULL;
    while(i<position){
        temp=curr;
        curr=curr->next;
        i++;
    }
    temp->next=curr->next;
    curr->next=NULL;
    delete curr;
    print(head);
}




void deleteAtHead(Node* &head){
    Node* temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    print(head);
}

void insertHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next= head;
    head=temp;
    print(head);
}

void insertAtPosition(Node* &head, int position, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    int i=1;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    newNode->next= temp->next;
    temp->next=newNode;
    print(head);
}

void insertAtEnd(Node* &head, int data){
    
    Node* temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    newNode->next= NULL;
    print(head);
}

int main()
{
    Node* head = new Node(12);
    insertHead(head, 33);
    insertAtPosition(head, 2, 34);
    insertAtEnd(head, 32);
    deleteAtHead(head);
    insertHead(head, 33);
    deleteAtPosition(head, 4);
    return 0;
}
