#include <iostream>

using namespace std;



class Hero {
    private:
    int health=100;
    char level='A';
    public:
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
    
    Hero Nikhil;
    cout<<Nikhil.getLevel()<<"\n";
    Nikhil.setLevel('B');
    cout<<Nikhil.getLevel()<<"\n";
    cout<<Nikhil.getHealth()<<"\n";
    Nikhil.setHealth(1000);
    cout<<Nikhil.getHealth()<<"\n";
}
