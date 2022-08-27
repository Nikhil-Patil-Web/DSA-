#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int binarySearch(int array[], int size, int key){
	int start=0;
	int end=size-1;
	
	int mid=(start+end)/2;
	while(start<=end){
		if(array[mid]==key){
			return mid;
		}
		if(key>array[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=(start+end)/2;
		
	}
	return -1;
}

int main(){
	int size,n;
	cout<<"Please enter size of the array\n";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Please enter the\t"<<i+1<<"th\telement of the array"<<"\n";
		cin>>array[i];	
	}
	cout<<"Please enter number to be found\n";
	cin>>n;
	cout<<"The output is as follows:\t"<<binarySearch(array, size, n);
	
}























//using namespace std;
//
//int binarySearch(int array[],int start, int end, int key){
//	int mid= (start+end)/2;
//	cout<<"searching from\t"<<start<<"\t"<<end<<"\n"; 
//	if(array[mid]<key){
//		binarySearch(array, start, mid-1, key);
//	}
//	if(array[mid]>key){
//		binarySearch(array, mid+1, end, key);
//	}
//	if(array[mid]==key){
//		return mid;
//	}
//	if(mid==start==end&&array[mid]!=key || end<start){
//		return -1;
//	}
//}
//
//int main(){
//	
//	int size,n;
//	cout<<"Please enter size of the array\n";
//	cin>>size;
//	int array[size];
//	for(int i=0;i<size;i++){
//		cout<<"Please enter the\t"<<i+1<<"th\telement of the array"<<"\n";
//		cin>>array[i];	
//	}
//	cout<<"Please enter number to be found\n";
//	cin>>n;
//	cout<<"First call with start=\t"<<0<<"\tand end="<<"\tsize-1\n";
//	cout<<"The output is as follows:\t"<<binarySearch(array, 0, size-1, n);
//}
