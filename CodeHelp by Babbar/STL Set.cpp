#include<iostream>
#include<conio.h>
using namespace std;
#include<set>

int main(){
    set<int> s;
    s.insert(5);
    s.insert(15);
    s.insert(50);
    s.insert(50);
    s.insert(15);
    s.insert(50);
    s.insert(5);
    s.insert(50);
    s.insert(15);
    s.insert(52);
    s.insert(53);
    s.insert(52);
    s.insert(53);
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i: s){
        cout<<i<<"\t";
    }
    cout<<"\nDoes 50 exist in our set?\nAns:\t"<<s.count(50);
    cout<<"\n";
}
