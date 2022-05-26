#include <iostream>

using namespace std;


int removeDuplicates(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }
    }
    return size;
}

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
    cout<<"The given array is as follows\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    sort(arr,size);
    cout<<"Sorted array is as follows\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    size=removeDuplicates(arr,size);
    cout<<"Array after removing duplicates is as follows\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    
    

    return 0;
}
