#include<iostream>
#include<conio.h>
using namespace std;
#include<stdlib.h>
#include<array>

int main(){
	int arr[5]={0,1,2,3,4};
	array<int,5> a={0,1,2,3,4};
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
	cout<<"At position 3 we have\t"<<a.at(3)<<"\t in our STL array\n";
	cout<<"Is STL array empty\t"<<a.empty()<<"\n";
	cout<<"Last element in STL array\t"<<a.back()<<"\n";
	cout<<"First element in STL array\t"<<a.front()<<"\n";	
}
