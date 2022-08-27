
#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;


long long int integralPart(int x)
{
    int s=0;
    int e=x-1;
    long long int mid=s+ (e-s)/2;
    long long int ans=0;
    while(s<=e){
        long long int square=mid*mid;
        if(square==x){
            return mid;
        }
        else if(x>square){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    return ans;
}

float firstDecimal(int n, int x){
    float ans=n;
    if (n*n ==x){
        return n;
    }
    for(float i=0.1; i<n+1; i=i+0.1){
        if((n+i)*(n+i)<x){
            ans=n+i;
        }
    }
    return ans;
}


float secondDecimal(int n, int x){
    float ans=n;
    if (n*n ==x){
        return n;
    }
    float num =firstDecimal(n,x);
    for(float i=0.01; i<0.1; i++){
         if((num+i)*(num+i)<x){
            ans=num+i;
        }
    }
    return ans;
}

int main()
{
    int x; 
    cout<<"Please enter the number whose square root is to be determined:\n";
    cin>>x;
    cout<<"\nThe square root (integral Part) of\t"<<x<<"\tis\t"<<integralPart(x);
    int integer=integralPart(x);
    cout<<"\nThe square root (first decimal Part) of\t"<<x<<"\tis\t"<<firstDecimal(integer, x);
    cout<<"\nThe square root (second decimal Part) of\t"<<x<<"\tis\t"<<secondDecimal(integer, x);


    return 0;
}

