class Solution {
public:

bool check (int point1, int point2, int centrex, int centrey, int radius){
    long long int i = point1*point1 -2*centrex*point1+centrex*centrex + point2*point2 -2*centrey*point2 + centrey*centrey - radius*radius;
    if(i<=0){
        return true;
    } 
    else return false;
}

    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            int count=0;
            for(int j=0; j<points.size(); j++){
                if(check(points[j][0], points[j][1], queries[i][0],queries[i][1],queries[i][2])){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
