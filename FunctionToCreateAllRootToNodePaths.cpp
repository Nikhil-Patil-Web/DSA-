#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
    
};

void print(vector<int>& output){
    for(int i=0; i< output.size(); i++){
        cout<<output[i]<<"\t";
    }
    cout<<"\n";
}


void inOrder(Node* root, vector<int>& output){
    if(root==NULL){
        return ;
    }
    output.push_back(root->data);
    inOrder(root->left, output);
    if(root->left==NULL and root->right==NULL){    print(output);}
    inOrder(root->right, output);
    output.pop_back();
}



int main()
{
    vector<int> output;
    Node* head= new Node(101);
    head->left= new Node(102);
    head->left->left= new Node(103);
    head->right= new Node(104);
    head->right->right= new Node(105);
    head->right->left= new Node(106);
    head->left->right= new Node(107);
    head->left->left->right= new Node(108);
    head->left->right->right= new Node(109);
    head->left->left->left= new Node(110);
    inOrder(head, output);

    return 0;
}
