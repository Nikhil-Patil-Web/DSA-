#include <iostream>

using namespace std;


class Node {
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

void insertAtHead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next= head;
    head=temp;
}


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    
    //insertion at 1st position
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    
    //traversing
    Node * temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }
    
    Node* insert= new Node(d);
    insert->next= temp->next;
    temp->next=insert;
    
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}



int main()
{
    Node* node1 = new Node(12);
    Node* node2= new Node(13);
    Node* node3 = new Node(14);
    Node* head = node1;
    Node* tail=node1;
    print(head);
    cout<<"inserting data at the head\n";
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 14);
    print(head);
    cout<<"inserting data at the tail\n";
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 13);
    print(head);
    cout<<"inserting data at the position\n";
    insertAtPosition(tail, head, 2, 33);
    print(head);
    insertAtPosition(tail, head, 7, 34);
    print(head);

    return 0;
}
