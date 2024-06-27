#include <iostream>
using namespace std;

class Hero{
    char level;
    int health;

    public:
    // getter
    int gethealth(){
        return health;
    }
    void sethealth(int n){
        health = n;
    }
};

int main(){
    Hero *ramesh = new Hero;
    ramesh->sethealth(500);
    cout << (*ramesh).gethealth() << endl;


}