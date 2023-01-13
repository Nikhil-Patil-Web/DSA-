#include <iostream>

using namespace std;


int calPow(int num, int power){
    if(power == 0){
        return 1;
    }
    else{
        if(power%2!=0){
            return num*calPow(num, power/2)*calPow(num, power/2);
        }
        else{
            return calPow(num, power/2)*calPow(num, power/2);
        }
    }
}

int main()
{
    cout<<calPow(7,0);
    return 0;
}
