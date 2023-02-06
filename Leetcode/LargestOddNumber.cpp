class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        while(size--){
          if((num[size]-'0')%2!=0){
              cout<<"here because "<<num[size]<<"%2 = "<<(num[size]-'0')%2<<"\n";
              return num.substr(0,size+1);
          }
        }
        return "";
    }
};
