// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    int temp1, temp2;
    int left=0;
    int right= n;
    for(int i=0;i<=right;i++){
        if(i==0){
            temp1=arr[i+1];
            arr[i+1]=arr[i];
        }
        else if(i==right){
            arr[0]=arr[right];
        }
        else{
            temp2=arr[i+1];
            arr[i+1]=temp1;
            temp1=temp2;
        }
    }
}
