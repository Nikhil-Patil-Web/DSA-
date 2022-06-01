
#include <iostream>

using namespace std;

class Queue{
    private:
    int arr[10000];
    int start=0;
    int end=0;
    public:
    
    void enqueue(int a){
        arr[end]=a;
        end++;
        cout<<"The next element will be added at position\t"<<end+1<<"\n";
    }
    
    void dequeue(){
        if(start!=end){
            cout<<"Removed element will be\t"<<arr[start]<<"\n";
            for(int i=0;i<end-1;i++){
                arr[i]=arr[i+1];
            }
        end--;
        }
    }
    void printQueue(){
        
        if(start==end){
            cout<<"The queue is empty\n";
        }
        if(start!=end){
             for(int i=start;i<end;i++){
                cout<<arr[i]<<"\t";
            }
            cout<<"\n";
        }
    }
   
};

int main()
{
    Queue Obj1;
    int check=5,count,a;
    while(check==5){
        cout<<"Press 1 to enqueue\n";
        cout<<"Press 2 to dequeue\n";
        cout<<"Press 3 to print the queue\n";
        cin>>count;
        if(count==1){
            cout<<"Please enter element to be enqueued\t";
            cin>>a;
            Obj1.enqueue(a);
        }
        else if(count==2){
            Obj1.dequeue();
        }
        else if(count==3){
            Obj1.printQueue();
        }
        cout<<"Press 5 if you want to continue\n";
        cin>>check;
    }
}

