#include<iostream>
#include<conio.h>
using namespace std;
#include<stdlib.h>

#include<list>

int main(){
    list<int> a;
    a.push_back(3);
    a.push_back(4);
    a.push_front(6);
    a.push_front(7);
    for(int i: a){
        cout<<i;
    }
    cout<<"\n";
    cout<<"Initial size of list is:\t"<<a.size();
    a.erase(a.begin());
    cout<<"\nFinal size of list is:\t"<<a.size();
    
}
