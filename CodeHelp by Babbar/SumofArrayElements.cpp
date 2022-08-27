#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int sumOfArray(int arr[], int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
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
	cout<<sumOfArray(array, size);
	
}
