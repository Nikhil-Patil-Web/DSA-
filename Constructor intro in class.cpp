#include <iostream>

using namespace std;



class Hero {
    private:
    int health=100;
    char level='A';
    public:
    Hero (){
        cout<<"Constructor called\n";
    }
    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health=h;
        
    }
    
    char getLevel(){
        return level;
    }
    
    void setLevel(char l){
        level=l;
    }
};

int main(){
    
    //static allocation
    cout<<"Printing from static allocation\n";
    Hero Nikhil;
    cout<<Nikhil.getLevel()<<"\n";
    Nikhil.setLevel('B');
    cout<<Nikhil.getLevel()<<"\n";
    cout<<Nikhil.getHealth()<<"\n";
    Nikhil.setHealth(1000);
    cout<<Nikhil.getHealth()<<"\n";
    
    //dynamic allocation
    cout<<"Printing from dynamic allocation\n";
    Hero *b = new Hero;
    cout<<(*b).getLevel()<<"\n";
    (*b).setLevel('C');
    cout<<(*b).getLevel()<<"\n";
    cout<<(*b).getHealth()<<"\n";
    (*b).setHealth(10000);
    cout<<(*b).getHealth()<<"\n";
    
     //dynamic allocation
    cout<<"Printing from dynamic allocation\n";
    cout<<(*b).getLevel()<<"\n";
    b->setLevel('D');
    cout<<(*b).getLevel()<<"\n";
    cout<<(*b).getHealth()<<"\n";
    b->setHealth(100000);
    cout<<(*b).getHealth()<<"\n";
    
    
}
