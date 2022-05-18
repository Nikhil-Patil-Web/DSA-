
#include<iostream>
#include<conio.h>

using namespace std;

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}

void reverse(int a[], int n){
    
    int temp;
    
	for(int i=0, j=n-1; i<=j;i++, j--){
	    
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
	}
}

int main()
{
	int num;
	int arr[1000];
	cout<<"Please Enter number of elements in the array\n";
	cin>>num;
	cout<<"PLese Enter the array elements one by one\n";
	for(int i=0;i<num;i++){
		cout<<"Plese enter element number\t"<<i+1;
		cin>>arr[i];
	}
	cout<<"Current array is\t";
	printArray(arr, num);
	reverse(arr, num);
	cout<<"Reversed array is\t";
	printArray(arr, num);
	return 0;
}
