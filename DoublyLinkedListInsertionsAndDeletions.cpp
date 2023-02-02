#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev= NULL;
    }
    
};

void countAndPrint(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
    cout<<"There are\t"<<count<<"\telements in the linked list\n";
}


void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp!=NULL and temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    temp->prev=NULL;
    delete temp;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
}


void deleteAtPosition(Node* head, int position){
    Node* temp=head;
    if(position==1){
        deleteAtHead(head);
    }
    else{
        int cnt=1;
       
        while(cnt<position &&  temp!=NULL&& temp->next!=NULL){
            temp=temp->next;
            cnt++;
        }
        if(cnt=position){
            temp->prev->next= temp->next;
            temp->next->prev= temp->prev;
            temp->next=NULL;
            temp->prev=NULL;
            delete temp;
        }
        else if(temp->next==NULL){
            deleteAtTail(head);
        }
    }
}





void insertAtHead(Node* &head, int data){
    Node * temp = new Node(data);
    temp->prev=NULL;
    temp->next= head;
    head->prev = temp;
    head=temp;
}

void insertAtTail(Node* &head, int data){
    Node* current = head;
    while(current!=NULL&& current->next!=NULL){
        current=current->next;
    }
    Node * temp= new Node(data);
    current->next=temp;
    temp->prev=current;
}

void insertAtPosition(Node* &head, int position, int data){
    if(position==1){
        insertAtHead(head, data);
    }
    else{
        Node* previous = head;
        Node* current=head;
        int cnt=1;
        while(cnt<position){
            previous=current;
            current=current->next;
            cnt++;
        }
        Node* temp= new Node(data);
        temp->prev=previous;
        temp->next=current;
        current->prev=temp;
        previous->next=temp;
    }
}

int main()
{
    Node *head = new Node(10);
    countAndPrint(head);
    insertAtHead(head, 23);
    countAndPrint(head);
    insertAtHead(head, 34);
    countAndPrint(head);
    insertAtTail(head, 81);
    countAndPrint(head);
    insertAtPosition(head, 4, 222);
    countAndPrint(head);
    deleteAtHead(head);
    countAndPrint(head);
    insertAtHead(head, 32);
    countAndPrint(head);
    deleteAtTail(head);
    countAndPrint(head);
    deleteAtPosition(head, 3);
    countAndPrint(head);
    return 0;
}
