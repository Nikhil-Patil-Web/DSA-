#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

//Conversion of a decimal number to binary

int main(){
	int num, size;
	cout<<"Enter number to be converted to binary\n";
	cin>>num;
    int array[10000];
    int i=0;
    while(num!=0){
    	array[i]=(num&1);
    	num=(num>>1);
    	i++;
	}
	for(int j=i; j>=0;j--){
		cout<<array[j];
	}
	
}
