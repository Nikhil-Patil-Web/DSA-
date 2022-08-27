#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	int prev=0, n;
	int num=prev+1;
	cout<<"Enter Value of N"<<"\n";
	cin>>n;
	cout<<"\n"<<prev<<"\t";
	cout<<num<<"\t";
	for(int i=0; i<n-2;i++){
		cout<<num+prev<<"\t";
		int prev_copy=prev;
		prev=num;
		num=num+prev_copy;
	}
}
