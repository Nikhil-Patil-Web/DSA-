class Solution {
public:
    
    bool check(int start, vector<vector<int>>& graph, vector<int> &color){
        queue<int> q;
        q.push(start);
        color[start]=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it: graph[node]){
                cout<<"checking for\t"<<it<<"\n";
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
        
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color (graph.size(), -1);

        for(int i=0; i<graph.size(); i++){
           if(color[i] == -1) {
	            if(check(i, graph, color) == false) {
	                return false; 
	            }
	        }
        }
        return true;
    }
};
