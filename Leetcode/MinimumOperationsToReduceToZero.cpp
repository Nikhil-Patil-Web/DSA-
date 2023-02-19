class Solution {
public:
    
    int findVal(int num){
        int temp=1;
        int initial=1;
        if(abs(num-temp)==0)return temp;
        while(temp<num){
            initial=temp;
            temp=temp*2;
        } 
        if(abs(initial-num)>abs(temp-num)){
            return temp;
        }
        return initial;
    }
    int minOperations(int n) {
        int ops=0;
        int current=n;
        while(current!=0){
            int toBeSub = findVal(current);
            current=abs(current-toBeSub);
            ops++;
        }
        return ops;
        
    }
};
