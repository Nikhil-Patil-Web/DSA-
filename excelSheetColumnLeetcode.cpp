class Solution {
public:
    vector<string> cellsInRange(string s) {
        int numCol = s[3]-s[0]+1;
        int numRow = s[4]-s[1]+1;
        vector<string> ans;
        for(int i=0; i<numCol; i++){
            for(int j=0; j<numRow; j++){
                string temp1="";
                string temp2="";
                char c1= char(s[0]+i);
                char c2= char(s[1]+j);
                temp1 =c1+temp1;
                temp2 = c2+temp2;
                string push = temp1+temp2;
                ans.push_back(push);
            }
        }
        return ans;
    }
};
