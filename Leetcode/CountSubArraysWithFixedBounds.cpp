class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long ans = 0;
        int i = 0;
        while (i < n) {
            int j = i;
            int lastPosOfMaxK = -1, lastPosOfMinK = -1;
            while (j < n && nums[j] >= minK && nums[j] <= maxK) {
                if(nums[j] == minK) lastPosOfMinK = j;
                if(nums[j] == maxK) lastPosOfMaxK = j;
                if(lastPosOfMinK >= 0 && lastPosOfMaxK >= 0)  ans += min(lastPosOfMinK, lastPosOfMaxK) - i + 1;
                j++;
            }
            i = j + 1;  
        }
        return ans;
    }
};
