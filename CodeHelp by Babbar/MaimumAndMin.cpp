#include<iostream>
#include<conio.h>
#include<stdio.h>


using namespace std;

int main(){
	
	int size;
	int array[size];
	cout<<"Pls enter array size\n";
	cin>>size;
	cout<<"Pls enter the array elements\n";
	for(int i=0;i<size;i++){
		cout<<"Pls enter\t"<<i+1<<"th\t"<<"element\n";
		cin>>array[i]; 
	}
	int max=array[0];
	int min=array[0];
	for (int j=0;j<size;j++){
		if(array[j]>max){
			max=array[j];
		}
		if(array[j]<min){
			min=array[j];
		}
	}
	cout<<"Maixmum value is\t"<<max<<"\n";
	cout<<"Minimum value is\t"<<min;
	
}
