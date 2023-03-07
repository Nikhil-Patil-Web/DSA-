class Solution {
public:

bool check(long long mid, int totalTrips, vector<int>&time){
    long long total =0;
    for(int i =0; i<time.size(); i++){
        total = total+mid/time[i];
    }
    if(total<totalTrips){
        return false;
    }
    return true;
}


    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lower=0; 
        long long ans=0;
        long long upper = pow(10, 14);
        while(lower<=upper){
            long long mid = lower + (upper-lower)/2;
            if(check(mid, totalTrips, time)){
                cout<<"Updating ans to:"<<mid<<"\n";
                ans= mid;
                upper = mid-1;
            }
            else{
                lower=mid+1;
            }
        }
        return ans;
    }
};
