
#include <iostream>
#include<conio.h>

using namespace std;

//Solution Using Bubble Sort

int num, arr[1000], temp;

//Swapping function

void swap(int i){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}


//Bubble Sort Function

void bubbleSort(int n, int ar[]){
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(ar[i]>ar[i+1]){
                swap(i);
            }
        }
    }
}

void printArray(int n, int ar[])
{
    for(int i=0;i<n;i++){
        cout<<ar[i]<<"\t";
    }
}

//Main

int main()
{
    cout<<"Please enter the number of elements in the array\n";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"Please enter element number\t"<<i+1<<"\t";
        cin>>arr[i];
    }
    bubbleSort(num, arr);
    printArray(num, arr);
}



