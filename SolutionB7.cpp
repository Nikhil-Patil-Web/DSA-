#include<iostream>
#include<conio.h>

using namespace std;

struct MiniMax{
    int min;
    int max;
};

MiniMax find(int arr[], int num){
    
    MiniMax pair;
    if(arr[0]>=arr[1]){
       pair.max=arr[0];
       pair.min=arr[1];
   } 
   
   else if(arr[1]>arr[0]){
       pair.max=arr[1];
       pair.min=arr[0];
   } 
   
   for(int i=2;i<num;i++){
       if(arr[i]>pair.max){
           pair.max=arr[i];
       }
       
       if(arr[i]<pair.min){
           pair.min=arr[i];
       }
   }
   return pair;
}

int main(){
    int arr[1000];
    int num;
    cout<<"Please enter the number of elements\n";
    cin>>num;
    
    for(int i=0;i<num;i++){
        cout<<"Please enter element\t"<<i+1<<"\t";
        cin>>arr[i];
    }
    
    cout<<"The Maximum element is\t"<<find(arr, num).max<<"\n";
    cout<<"The Minimum element is\t"<<find(arr, num).min<<"\n";

    return 0;
}
