#include <iostream>
using namespace std;

class Hero{
    char level;
    int health;

    public:

    // Constructor
    Hero(int health) {
        cout << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
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
    Hero ramesh(10); 
    cout << ramesh.gethealth() << endl;


}