#include<iostream>
#include<conio.h>
using namespace std;
#include<queue>

int main(){
	priority_queue<int> maxi;
	priority_queue<int, vector<int>, greater<int>> mini;
	
	maxi.push(1);
	maxi.push(3);
	maxi.push(4);
	maxi.push(6);
	maxi.push(9);
	mini.push(4);
	mini.push(1);
	mini.push(2);
	mini.push(9);
	int minSize= mini.size();
	int maxSize= maxi.size();
	for(int i=0; i<minSize; i++){
	    cout<<mini.top()<<"\t";
	    mini.pop();
	}
	cout<<"\n";
	for(int j=0; j<maxSize; j++){
	    cout<<maxi.top()<<"\t";
	    maxi.pop();
	}
}
