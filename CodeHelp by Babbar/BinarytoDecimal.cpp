#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
	int binary;
	int num=0;
	cout<<"Please enter number to be converted\n";
	cin>>binary;
	int i=1;
	while(binary!=0){
		int bit=binary%10;
		num=num+pow(2, i-1)*bit;
		binary=binary/10;
		i++;
	}
	cout<<num;
}

