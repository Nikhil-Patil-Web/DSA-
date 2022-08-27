#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


void print(int array[], int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<"\t";
	}
	cout<<"\n";
}


void sort01(int array[],int size){
	
	int right=size-1;
	int left=0;
	while(left<right-1){
		if(array[left]==0){
		left++;
		}
		if(array[right]==1){
			right--;
		}
		if(array[left]==1&&array[right]==0){
			int temp= array[left];
			array[left]=array[right];
			array[right]=temp;
			left++;
			right--;
		}
	}	
	print(array, size);
}

int main(){
	int size;
	cout<<"Please enter the size of the array\n";
	cin>>size;
	int array[size];
	for(int i=0;i<size; i++){
		cout<<"Please enter element number\t"<<i+1<<"\t";
		cin>>array[i];
	}
	sort01(array, size);

}
