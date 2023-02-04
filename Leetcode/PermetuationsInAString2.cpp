//This one isn't optimized but it does give the required solution. 

class Solution {
public:
bool check(vector<int> a, vector<int> b){
    for(int i =0; i<a.size(); i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
     return true;
}

vector<int> makeArray(string s){
    vector<int> charAr;
    for(int i=0; i<26; i++){
        charAr.push_back(0);
    }
    for(int i=0; i<s.length(); i++){
        charAr[int(s[i])-97]++;
    }
    return charAr;
}

    bool checkInclusion(string s1, string s2) {
        vector<int> s1_copy = makeArray(s1);
        vector<int>s2_copy;
        string temp="";
        int k=0;
        for(int i=s1.length()-1; i<s2.length(); i++){
            temp=s2.substr(k, s1.length());
            s2_copy = makeArray(temp);
            if(check(s1_copy, s2_copy)){
                return true;
            }
            k++;
        }
       
        return false;
    }
};
