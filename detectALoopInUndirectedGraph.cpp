#include <iostream>
#include<vector>
#include<queue>

using namespace std;


bool detect(int src, vector<vector<int>> adj, vector<int> &vis){
    vis[src]=1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        cout<<"{"<<node<<","<<parent<<"}"<<"\n";
        q.pop();
        for(auto adjacentNode: adj[node]){
            if(!vis[adjacentNode]){
                vis[adjacentNode]=1;
                q.push({adjacentNode, node});
            }
            else if(parent!=adjacentNode){
                cout<<"Here because"<<parent<<"!="<<adjacentNode<<"\n";
                return true;
            }
        }
    }
    return false;
}


bool isCycle(int V, vector<vector<int>> &adj){
    
    vector<int>vis;
    for(int i=0; i<V+1; i++){
        vis.push_back(0);
    }
    int src=1;
    if(detect(src, adj, vis)){
        return true;
    }
    else{
        return false;
    }
    
    
}

int main()
{
    vector<vector<int>> adj;
    adj.push_back({0});
    adj.push_back({2,3});
    adj.push_back({1,5});
    adj.push_back({1,4,6});
    adj.push_back({3});
    adj.push_back({2,7});
    adj.push_back({3});
    adj.push_back({5});
    if(isCycle(7, adj)){
        cout<<"Yes Cycle is Present\n";
    }
    else{
        cout<<"No cycle is absent\n";
    }

}
