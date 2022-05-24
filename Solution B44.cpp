// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>
#include<iostream>

using namespace std;

void printSpiral (int upperBound, int lowerBound, int left, int right, int arr[][1000]){
    int i=upperBound;
        for(int j=left; j<=right; j++){
            cout<<arr[i][j]<<"\t";
        }
        
    
    i=right;
        for(int j=upperBound+1; j<=lowerBound;j++){
            cout<<arr[j][i]<<"\t";
        }

    i=lowerBound;
        for(int j=right-1;j>=left; j--){
            cout<<arr[i][j]<<"\t";
        }
    
    i=left;
        for(int j=lowerBound-1;j>upperBound;j--){
            cout<<arr[j][i]<<"\t";
        }
    upperBound++;
    lowerBound--;
    left++;
    right--;
    if(upperBound<lowerBound&&left==right){
        int k=left;
        for(int j=upperBound; j<=lowerBound; j++){
            cout<<arr[j][k]<<"\t";
        }
    }
    else if(upperBound==lowerBound&&left<right){
        int k=upperBound;
        for(int j=left; j<=right; j++){
            cout<<arr[k][j]<<"\t";
        }
    }
    else if(upperBound<lowerBound&&left<right){
        printSpiral(upperBound, lowerBound, left, right, arr);
    }
    else if(upperBound==lowerBound&&left==right){
        cout<<arr[upperBound][left]<<"\t";
    }
}

int main(){
    int row, col, arr[1000][1000];
    cout<<"Please enter the number of rows of the matrix\n";
    cin>>row;
    cout<<"Please enter the number of columns of the matrix\n";
    cin>>col;
    for(int r=0; r<row;r++){
        for(int c=0;c<col;c++){
            cout<<"Enter the element at position\t["<<r<<"]["<<c<<"]\n";
            cin>>arr[r][c];
        }
    }
    for(int r=0; r<row;r++){
        cout<<"\n";
        for(int c=0;c<col;c++){
            cout<<arr[r][c]<<"\t";
        }
    }
    cout<<"Spiral form is as follows\n";
    printSpiral(0,row-1,0,col-1, arr);
}
