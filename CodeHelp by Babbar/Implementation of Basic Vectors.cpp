#include<iostream>
#include<conio.h>
using namespace std;
#include<stdlib.h>

#include<vector>


int main()
{
    vector<int> a(5,1);
    for(int i: a){
        cout<<i;
    }
    cout<<"\n";
    cout<<"The capacity initially is:\t"<<a.capacity()<<"\n";
    a.push_back(6);
    cout<<"The capacity later on is:\t"<<a.capacity()<<"\n";
    cout<<"The size of our vector is:\t"<<a.size()<<"\n";
    cout<<"The element at position 4 is:\t"<<a.at(3)<<"\n";
    cout<<"The element at the beginning of the array is:\t"<<a.front()<<"\n";
    cout<<"The element at the end of the array is:\t"<<a.back()<<"\n";
    
    return 0;
}

