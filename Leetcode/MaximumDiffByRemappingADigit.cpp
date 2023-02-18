class Solution {
public:
    int minMaxDifference(int num) {
        string num1= to_string(num);
        string num2 = to_string(num);
        char c = num1[0];
        char ch = num2[0];
        for(int j=0; j<num1.size(); j++){
            if(num1[j]!='9'){
                c=num1[j];
                break;
            }
        }
        for(int j=0; j<num1.size(); j++){
            if(num1[j]==c){
                cout<<"Hi here because"<<num1[j]<<"="<<c;
                num1[j]='9';
            }
        }
        for(int j=0; j<num2.size(); j++){
            if(num2[j]==ch){
                num2[j]='0';
            }
        }
        int maxi = stoi(num1); int mini = stoi(num2);
        cout<<maxi;
        cout<<mini;
        return maxi-mini;
        
    }
};
