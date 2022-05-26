// This is a template function for BubbleSort


#include <iostream>

using namespace std;


void sort (int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Please enter the number of elements in array\t";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Please enter element\t"<<i+1<<"\t";
        cin>>arr[i];
    }
    cout<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    sort(arr,size);
    cout<<"Sorted array is as follows\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    

    return 0;
}

