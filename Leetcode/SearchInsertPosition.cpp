class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0, e=nums.size()-1, mid;
        mid= s+(e-s)/2;
        int s_copy;
        while(s<=e){
            s_copy=s;
            if(nums[mid]==target){
                return mid;
            }
            else if( nums[mid]>target){
                e=mid-1;
            }
            else if (nums[mid]<target){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        
        if(target<nums[s_copy]){
            return s_copy;
        }
        else{
            return s_copy+1;
        }
        
    }    
    
};
