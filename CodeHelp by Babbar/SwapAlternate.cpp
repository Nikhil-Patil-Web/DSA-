#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;


void print(int arr[], int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
} 


void swapAlternate(int arr[], int size){
	
	for(int i=0;i<size-1;i=i+2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;	
	}
	print(arr, size);
}

int main(){
	int size;
	cout<<"Please enter size of the array\n";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Please enter the\t"<<i+1<<"th\telement of the array"<<"\n";
		cin>>array[i];	
	}
	swapAlternate(array, size);
	return 0;
}
