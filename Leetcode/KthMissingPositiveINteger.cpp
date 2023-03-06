class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        map<int, int> myMap;
        while(count<arr.size()){
            myMap[arr[count]]=1;
            count++;
        }
        int i=1;
        int missing=0;
        while(missing<k){
            if(myMap[i]!=1){
                missing++;
            }
            i++;
        }
        return i-1;
    }
};
