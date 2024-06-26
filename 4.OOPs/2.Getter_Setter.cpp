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
    Hero ramesh;
    char a;
    cout << ramesh.gethealth() << endl;
    ramesh.sethealth(50);
    cout << ramesh.gethealth()<< endl;

}