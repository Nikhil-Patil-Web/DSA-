#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<pair<BinaryTreeNode<int>*, int>> q;
    map<int, int>myMap;
    q.push({root, 0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        BinaryTreeNode<int>* temp = p.first;
        int x = p.second;
        int data=temp->data;
        myMap[x]=temp->data;
        if(temp->left!=NULL){
            q.push({temp->left, x-1});
        }
        if(temp->right!=NULL){
          q.push({temp->right, x + 1});
        }
    }
    for(auto i: myMap){
        ans.push_back(i.second);
    }
    return ans;

}
