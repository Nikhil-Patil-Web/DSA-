#include <iostream>
#include <vector>
#include <stack>
#include<queue>

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


 vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        else{
            queue<Node*> q;
            q.push(root);
            while(!q.empty()){
                vector<int> temp;
                int size= q.size();
                for(int i=0; i<size; i++){
                temp.push_back(q.front()->data);
                if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(temp);
            }
            return ans;
        }
    }

vector<int> preOrder(Node* root){
    vector<int> preorder;
    if(root==NULL){
        return preorder;
    }
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right!=NULL){
            st.push(root->right);
        }
        if(root->left!=NULL){
            st.push(root->left);
        }
    }
    return preorder;
}







int main()
{
    Node* root = new Node(12);
    vector<int> ans;
    root->left = new Node(13);
    root->right= new Node(34);
    root->left->left=new Node(445);
    root->right->left=new Node(225);
    root->right->right = new Node(220);
    root->left->left->right= new Node(20);
    root->left->right=new Node(132);
    cout<<"Pre Order Traversal\t";
    ans=preOrder(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<"\t";
    }
    cout<<"\nLevel Order Traversal\t";
    vector<vector<int>> ans2=levelOrder(root);
    for(int i=0; i<ans2.size(); i++){
        for(int j=0; j<ans2[i].size(); j++){
            cout<<ans2[i][j]<<"\t";
        }
    }
    return 0;
}
