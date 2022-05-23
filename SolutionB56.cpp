#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;


// Use the following code for the leetcode question. It just involves swapping the characters. 

void reverse (vector<char> &s){
	    int leftPointer=0;
        int rightPointer=s.size()-1;
        while(leftPointer<rightPointer){
            int temp=s[leftPointer];
            s[leftPointer]=s[rightPointer];
            s[rightPointer]=temp;
            leftPointer++;
            rightPointer--;
        }
}

