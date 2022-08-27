#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


bool possibleSolution(vector<int> &arr, int n, int target, int mid){
	int sum=0;
	for(int i=0;i<n;i++){
		int diff= arr[i]-mid;
		if(diff<=0){
			sum=sum+0;
		}
		else{
			sum=sum+diff;
		}
	}
	if(sum>=target){
		return true;
	}
	return false;
}




int solution(vector<int> &arr, int n, int target){
	int s=0;
	int maxi=-1;
	for(int i=0;i<n;i++){
		maxi=max(maxi, arr[i]);
	}
	int e=maxi;
	mid= s+ (e-s)/2;
	
	while(s<=e){
		if(possibleSolution(ar, n, target, mid)){
			ans= mid;
			s=mid+1;
		}
		else{
			e= mid-1;
		}
		mid= s+(e-s)/2;
	}
	return ans;
}


int main() {
	int n, vector<int> arr, target;
	cin>>n; 
	cin>>target;
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	cout<<solution(arr, n, target)<<"\n";
	return 0;
}
