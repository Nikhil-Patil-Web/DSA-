#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void calc(float a, float b, char c){
	
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		case '%':
			cout<<int(a)%int(b);
			break;
	}
	
	
}

int main(){
	float a, b;
	char c;
	
	cout<<"Please enter the first number\n";
	cin>>a;
	cout<<"Please enter the second number\n";
	cin>>b;
	cout<<"Please enter the operation\n";
	cin>>c;
	calc(a,b,c);
}
