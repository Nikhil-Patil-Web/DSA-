
#include <iostream>
#include<map>

using namespace std;


class Node{
    public: 
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<"\n";
    return;
}


Node* tailFinder(Node* &head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}

Node* detectLoop(Node* &head){
    if(head==NULL){
        return head;
    }
    map<Node*, bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return temp;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return NULL;
}

Node* flyodDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast= head;
    while(slow!=NULL and fast!=NULL){
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



void insert(Node* &head, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        temp->next=NULL;
        head=temp;
    }
    else if(head->next==NULL){
        Node* temp =new Node(data);
        head->next = temp;
    }
    else{
        Node* newNode = new Node(data);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    print(head);
    return;
}


int main()
{
    
    Node* head =NULL;
    insert(head, 12);
    insert(head, 13);
    insert(head, 14);
    insert(head, 23);
    insert(head, 25);
    insert(head, 15);
    Node* tail = tailFinder(head);
    tail->next=head->next->next;
    // if(detectLoop(head)){
    //     cout<<"Yes loop exists\n";
    // }
    Node *loopStart = detectLoop(head);
    Node* flyodDetect = flyodDetectLoop(head);
    cout<<"Loop is present at\t"<<flyodDetect->data<<"\n";
    cout<<"Loop is present at\t"<<loopStart->data<<"\n";
    // print(head);
    return 0;
}
