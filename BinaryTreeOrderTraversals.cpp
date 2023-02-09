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

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"\t";
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}

int main()
{
    Node * root = new Node(5);
    root->left= new Node(7);
    root->right= new Node(9);
    root->left->left = new Node(11);
    root->left->right = new Node(13);
    cout<<"\nPre Order Traversal\t";
    preOrder(root);
    cout<<"\nPost Order Traversal\t";
    postOrder(root);
    cout<<"\nIn Order Traversal\t";
    inOrder(root);
    

    return 0;
}
