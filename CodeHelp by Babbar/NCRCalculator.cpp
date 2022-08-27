#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int calcFact(int num){
	int ans=1;
	
	for(int j=num; j>0; j--){
		ans=ans*j;
	}
	
	return ans;
}

int ncr(int n, int r){
	int required = calcFact(n)/(calcFact(n-r)* calcFact(r));
	return required;
}

int main(){
	int n, r;
	cout<<"Please enter the value on n\n";
	cin>>n;
	cout<<"Please enter the value of r\n";
	cin>>r;
	cout<<"\n"<<ncr(n,r);
}
