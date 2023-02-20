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

    bool check(vector<int> output, int target){
        int sum=0;
        for(int i=0; i<output.size(); i++){
            sum=sum+output[i];
        }
        if(sum==target){
            return true;
        }
        return false;
    }

    void traversal(TreeNode* root, vector<int> output, vector<vector<int>> & ans, int target){
        if(root==NULL){
            return;
        }
        output.push_back(root->val);
        traversal(root->left, output, ans, target);
        if(root->left==NULL and root->right==NULL){
            if(check(output, target)){
                ans.push_back(output);
            }
        }
        traversal(root->right, output, ans, target);
        output.pop_back();
    }



    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> output;
        traversal(root, output, ans, targetSum);
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j]<<"\t";
            }
            cout<<"\n";
        }
        return ans;
    }
};
