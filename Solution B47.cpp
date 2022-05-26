// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int count[n];
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            int k=0;
	            while(arr[i][j]==0){
	                k++;
	            }
	            count[i]=m-k;
	        }
	       
	    }
	    int max=count[0];
	    for(int i=0;i<n;i++){
	        if(count[i]>=max){
	            max=count[i];
	        }
	    }
	    
	    return max;
	    
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
