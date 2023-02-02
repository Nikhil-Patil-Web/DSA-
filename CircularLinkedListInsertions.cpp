#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int d) {
        this->data= d;
        this->next=NULL;
    }
    
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data\t"<<value<<endl;
        
    }
};


void print(Node* &tail){
    Node * temp=tail;
    Node* copy= tail;
    cout<<temp->data<<"\t";
    temp=temp->next;
    while(temp!=copy){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
}

void insertElement(Node* &tail, int element, int d){
    
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        tail->next=tail;
    }
    else{
        Node* curr = tail;
        while(curr!=NULL && curr->data!=element){
            curr=curr->next;
        }
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
    
}

int main()
{
    Node *tail=NULL;
    insertElement(tail, 0, 1);
     print(tail);
    insertElement(tail, 1,2);
     print(tail);
     insertElement(tail, 2, 3);
     print(tail);
     insertElement(tail, 1, 4);
     print(tail);
    
}
