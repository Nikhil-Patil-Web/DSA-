#include<iostream>
#include<conio.h>
using namespace std;
#include<stack>

int main(){
	stack<int> a;
	a.push(9);
	a.push(11);
	a.push(-13);
	a.push(14);
	a.push(17);
	cout<<"\n";
	cout<<"Is STL array empty\t"<<a.empty()<<"\n";
	cout<<"Last element entered in our STL stack\t"<<a.top()<<"\n";
	cout<<"The size of stack is as follows:\t"<<a.size()<<"\n";
}
