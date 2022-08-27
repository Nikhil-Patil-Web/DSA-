#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

//Linear search

bool linearSearch(int arr[], int size, int n){
	
	for(int i=0;i<size; i++){
		if(arr[i]==n){
			return true;
		}
	}
	return false;
	
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
	cout<<"The output is as follows:\t"<<linearSearch(array, size, n);
}
