#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int firstOcc(int arr[], int n, int k){
	int s=0, e=n-1, ans=0;
	int mid=s+ (e-s)/2;
	while(s<=e){
		if(arr[mid]==k){
			ans=mid;
			e=mid-1;
		}
		else if (arr[mid]>k){
			e=mid-1;
		}
		else if (arr[mid]<k){
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
	
}

int lastOcc(int arr[], int n, int k){
	int s=0, e=n-1, ans=0;
	int mid=s+ (e-s)/2;
	while(s<=e){
		if(arr[mid]==k){
			ans=mid;
			s=mid+1;
		}
		else if (arr[mid]>k){
			e=mid-1;
		}
		else if (arr[mid]<k){
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){
	
	int size,key;
	cout<<"Please enter size of the array\n";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Please enter the\t"<<i+1<<"th\telement of the array"<<"\n";
		cin>>array[i];	
	}
	cout<<"Please enter number to be found\n";
	cin>>key;
	int lastOccurence=lastOcc(array, size, key);
	int firstOccurence=firstOcc(array, size, key);
	cout<< lastOccurence-firstOccurence<<"\n";
	return 0;
}
