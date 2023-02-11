
#include <iostream>
#include<stack>
#include<vector>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};


int maxi(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        if(root->left==NULL and root->right==NULL)
   {
       return 0;
   }
   else if (root->left!=NULL and root->right==NULL){
       return 1+ max(maxi(root->left), maxi(NULL));
   }
   else if (root->right!=NULL and root->left==NULL){
       return 1+ max(maxi(NULL), maxi(root->right));
   }
   else {
       return 1+ max(maxi(root->left), maxi(root->right));
   }
    }
    
}




int main()
{
    Node* root = new Node(10);
    root->left = new Node(11);
    root->right = new Node(12);
    root->left->right= new Node(14);
    root->left->left = new Node(13);
    root->right->left = new Node(15);
    root->right->left->right = new Node(16);
    int height = maxi(root);
    cout<<height<<"\n";
   
    return 0;
}
