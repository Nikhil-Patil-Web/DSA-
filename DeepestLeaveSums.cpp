/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


  vector<int> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> emptyAns;
        if(root==NULL){
            return emptyAns;
        }
        else{
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                vector<int> temp;
                int size= q.size();
                for(int i=0; i<size; i++){
                temp.push_back(q.front()->val);
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
            return ans[ans.size()-1];
        }
    }


    int deepestLeavesSum(TreeNode* root) {
        vector<int> ans;
        int sum=0;
        ans =levelOrder(root);
        for(int i=0; i<ans.size(); i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};
