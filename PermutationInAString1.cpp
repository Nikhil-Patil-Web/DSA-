//This is the brute force approach of making all the permutations by recursion and comparing. This will give TLE but the code is appropriate.

class Solution {
public:


bool check(string copy, string s2){
    cout<<"copy:\t"<<copy<<"\n";
    if(copy.length()>s2.length()){
        return false;
    }
   else{
       int i=0;
       int j=copy.length()-1;
       int k= copy.length();
       while(j<s2.length()){
           string temp = s2.substr(i,k);
        if(temp==copy){
            return true;
        }
           i++;
           j++;
       }
   }
   return false;
    }
   



    void solve(vector<string> &ansList, string s1, int index){
        //basCase
        if(index>=s1.length()){
            ansList.push_back(s1);
            return;
        }
        else{
            for(int j=index; j<s1.size(); j++){
                swap(s1[index], s1[j]);
                solve(ansList, s1, index+1);
                swap(s1[index], s1[j]);
            }
        }
    }




    bool checkInclusion(string s1, string s2) {
        vector<string> ansList;
        int index=0;
        solve(ansList, s1, index);
        for(int i=0; i<ansList.size(); i++){
            if(check(ansList[i], s2)){
                return true;
            }
        }
        return false;
    }
};
