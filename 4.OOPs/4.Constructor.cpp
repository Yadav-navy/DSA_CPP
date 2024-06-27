#include <iostream>
using namespace std;

class Hero{
    char level;
    int health;

    public:

    // Constructor
    Hero() {
        cout << "Constructor Created"<< endl;
    }

    
    // getter
    int gethealth(){
        return health;
    }
    void sethealth(int n){
        health = n;
    }



};

int main(){
    Hero ramesh; 


}