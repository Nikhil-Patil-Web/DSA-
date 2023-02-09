#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
    Node(int d){
        data=d;
        right=NULL;
        left=NULL;
    }
};

void preOrder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node * root = new Node(5);
    root->left= new Node(7);
    root->right= new Node(9);
    root->left->left = new Node(11);
    root->left->right = new Node(13);
    preOrder(root);

    return 0;
}
