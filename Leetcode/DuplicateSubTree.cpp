class Solution {
public:
vector<TreeNode*> res;
vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
    unordered_map<string,int> m;
    solve(root,m);
    return res;
}

string solve(TreeNode* root,unordered_map<string,int>& m){
    if(!root) return "x";
    string l=solve(root->left,m);
    string r=solve(root->right,m);
    string temp=to_string(root->val)+" "+l+" "+r+" ";
    m[temp]++;
    if(m[temp]==2)
        res.push_back(root);
    return temp;
}
};
