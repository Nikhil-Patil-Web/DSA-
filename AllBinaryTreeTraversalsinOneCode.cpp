#include <iostream>
#include<stack>
#include<vector>



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

vector<vector<int>>traversals(Node* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    else{
        vector<int> preOrder;
        vector<int> postOrder;
        vector<int> inOrder;
        stack<pair<Node*, int>> s;
        s.push({root, 1});
        while(!s.empty()){
            auto it = s.top();
            s.pop();
            if(it.second==1){
                preOrder.push_back(it.first->data);
                it.second++;
                s.push(it);
                if(it.first->left!=NULL)
                {
                    s.push({it.first->left, 1});
                }
            
            }
            if(it.second==2){
                inOrder.push_back(it.first->data);
                it.second++;
                s.push(it);
                if(it.first->right!=NULL)
                {
                    s.push({it.first->right, 1});
                }
                
            }
            if(it.second==3){
                postOrder.push_back(it.first->data);
            }
        }
        ans.push_back(preOrder);
        ans.push_back(inOrder);
        ans.push_back(postOrder);
        return ans;
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
    vector<vector<int>> ans = traversals(root);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
