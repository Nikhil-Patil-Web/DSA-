
#include <iostream>

using namespace std;

class Stack{
    private:
    public:
    int arr[10000], top=0;
    
    void push(int a){
        arr[top]=a;
        top++;
        cout<<"Next element will be added at position\t"<<top+1<<"\n";
    }
    
    void pop(){
        if(top!=0){
            top--;
            arr[top]=0;
            cout<<"Next element will be added at position\t"<<top+1<<"\n";
        }
        else{
            cout<<"Stack is empty\n";
        }
    }
    
    void printStack(){
        int i=0;
        
        if(top==0){
            cout<<"Stack is empty\n";
        }
        else{
            cout<<"Stack from bottom to top is as follows\n";
            while(i<top){
            cout<<arr[i]<<"\t";
            i++;
            }
        }
        
    }
};

int main()
{
    Stack Obj1;
    int count=0;
    int check=5;
    int a;
    while(check==5){
    cout<<"Please enter 1 to push an element\n";
    cout<<"Please enter 0 to pop an element\n";
    cout<<"Please enter 2 to print the stack\n";
    cin>>count;
    if(count==1){
        cout<<"Please enter element to be pushed\t";
        cin>>a;
        Obj1.push(a);
        cout<<"Press 5 if you wish to continue else press any number\n";
        cin>>check;
    }
    else if(count==0){
        Obj1.pop();
        cout<<"Press 5 if you wish to continue else press any number\n";
        cin>>check;
    }
    else if (count==2){
        Obj1.printStack();
        cout<<"Press 5 if you wish to continue else press any number\n";
        cin>>check;
    }
    }
}

