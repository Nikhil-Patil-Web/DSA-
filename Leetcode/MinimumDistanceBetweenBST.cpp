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

    void inOrder(TreeNode* root, vector<int> &inO){
        if(root==NULL){
            return;
        }
        inOrder(root->left, inO);
        inO.push_back(root->val);
        inOrder(root->right, inO);
    }

    int minDiffInBST(TreeNode* root) {
        vector<int>inO;
        inOrder(root, inO);
        int mini = INT_MAX;
        for(int i=0; i<inO.size()-1; i++){
            int diff = abs(inO[i]-inO[i+1]);
            mini = min(diff, mini);
        }
        return mini;
    }
};
