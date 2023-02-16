#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    map<int, int> myMap;
    if(root==NULL){
        return ans;
    }
    queue<pair<TreeNode<int>*, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        TreeNode<int>* node = p.first;
        int x_val = p.second;
        if(myMap.find(x_val)==myMap.end()){
            myMap[x_val]=node->val;
        }
        if(node->left!=NULL){
            q.push({node->left, x_val-1});
        }
        if(node->right!=NULL){
            q.push({node->right, x_val+1});
        }
    }
    for(auto it: myMap){
        ans.push_back(it.second);
    }
    return ans;
}
