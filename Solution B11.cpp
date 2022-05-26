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


// The code below is a totally unique code for finding Union of two arrays. It makes use of sort and removal of duplicates. 


//#include <iostream>
//
//using namespace std;
//int result[100000];
//
//int removeDuplicates(int arr[], int size){
//    for(int i=0;i<size;i++){
//        if(arr[i]==arr[i+1]){
//            for(int j=i;j<size;j++){
//                arr[j]=arr[j+1];
//            }
//            size--;
//        }
//    }
//    return size;
//}
//
//void sort (int arr[], int size){
//    for(int i=0;i<size;i++){
//        for(int j=0;j<size-1;j++){
//            if(arr[j]>arr[j+1]){
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//            }
//        }
//    }
//}
//
//
//void doUnion(int arr1[], int arr2[], int size_1, int size_2){
//    for(int i=0;i<size_1;i++){
//        result[i]=arr1[i];
//    }
//    for(int i=size_1;i<size_1+size_2;i++){
//        result[i]=arr2[i-size_1];
//    }
//    sort(result, size_1+size_2);
//    int size= removeDuplicates(result, size_1+size_2);
//    cout<<"Array after Union the resultant is as follows:\t";
//    for(int i=0;i<size;i++){
//        cout<<result[i]<<"\t";
//    }
//}
//
//
//int main()
//{
//    int size_1, size_2;
//    
//    cout<<"Please enter the number of elements in array 1\n";
//    cin>>size_1;
//    cout<<"Please enter the number of elements in array 2\n";
//    cin>>size_2;
//    int arr1[size_1], arr2[size_2];
//    cout<<"Enter elements for array 1\n";
//    for(int i=0;i<size_1;i++){
//        cout<<"Please enter the element number\t"<<i+1<<"\t";
//        cin>>arr1[i];
//    }
//    cout<<"Enter elements for array 2\n";
//    for(int i=0;i<size_2;i++){
//        cout<<"Please enter the element number\t"<<i+1<<"\t";
//        cin>>arr2[i];
//    }
//    for(int i=0;i<size_1;i++){
//        cout<<arr1[i]<<"\t";
//    }
//    cout<<"\n";
//    for(int i=0;i<size_2;i++){
//        cout<<arr2[i]<<"\t";
//    }
//    cout<<"\n\n";
//    doUnion(arr1,arr2,size_1,size_2);
//}




