#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
 
int main(){
	int n, check=0;
	cout<<"Please enter the number to be tested"<<"\n";
	cin>>n;
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			cout<<"Number not prime\n";
			check=1;
			break;
		}
	}
	if(check==0){
		cout<<"Number is prime\n";
	}
}
