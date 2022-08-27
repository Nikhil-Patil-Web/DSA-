#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int setBit(int num){
	int count=0;
	while(num>0){
		if(num&1){
			count++;
		}
		num=(num>>1);
	}
	return count;
}

int main(){
	int a,b;
	cout<<"Please enter the first number\n";
	cin>>a;
	cout<<"Please enter the second number\n";
	cin>>b;
	int totalBits=setBit(a)+setBit(b);
	cout<<"Sum of set bits is"<<totalBits<<"\n";
}
