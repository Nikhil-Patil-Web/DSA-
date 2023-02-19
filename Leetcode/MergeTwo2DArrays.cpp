class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> myMap;
        vector<vector<int>> finalAns;
        for (int i=0; i< nums1.size(); i++){
            myMap[nums1[i][0]]=myMap[nums1[i][0]]+nums1[i][1];
        }
        for (int i=0; i< nums2.size(); i++){
            myMap[nums2[i][0]]=myMap[nums2[i][0]]+nums2[i][1];
        }
        for (auto i: myMap){
            finalAns.push_back({i.first, i.second});
        }
        return finalAns;
        
    }
};
