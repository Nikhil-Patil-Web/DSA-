#include<iostream>
#include<conio.h>

using namespace std;


void sort012(int a[], int n)
{
    int zeroCount=0, oneCount=0, twoCount=0;
    for(int i=0;i<n;i++){
        if( a[i]==0){
            zeroCount++;
        }
        else if (a[i]==1){
            oneCount++;
        }
        else{
            twoCount++;
        }
    }
    
    for(int i=0; i<zeroCount; i++){
        a[i]=0;
    }
    for(int i=zeroCount; i<zeroCount+oneCount; i++){
        a[i]=1;
    }
    for(int i=zeroCount+oneCount; i<n; i++){
        a[i]=2;
    }
}

int main(){
	int arr[1000], num;
	cout<<"Enter the number of elements in the array\n";
	cin>>num;
	for(int i=0;i<num;i++){
		cout<<"PLEASE ENTER ELEMENT NUMBER\t"<<i+1<<"\t";
		cin>>arr[i];
	}
	sort012(arr,num);
	
	for(int i=0;i<num;i++){
		cout<<"\n";
		cout<<arr[i]<<"\t";
	}
	
}
