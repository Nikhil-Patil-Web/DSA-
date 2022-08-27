#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void printAp(int size){
	for(int j=0;j<size; j++)
	{
		cout<<3*(j+1)+7<<"\t";
	}
	
}

int main(){
	int size;
	cout<<"Please enter how many numbers you want to display.";
	cin>>size;
	printAp(size);
}
