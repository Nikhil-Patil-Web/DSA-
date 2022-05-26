// { Driver Code Starts
//Initial template for C++


// This is the code on Geeks for Geeks and I have added the required Do Union Function
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count=1;
        int result[m+n];
        for(int i=0;i<n;i++){
            result[i]=a[i];
        }
        for(int i=n;i<m+n;i++){
            result[i]=b[i-n];
        }
        sort(result, result+n+m);
        for(int i=1;i<n+m;i++){
            if(result[i-1]!=result[i]){
                count++;
            }
        }
        return count;
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends




