#include <iostream>
using namespace std;

class Hero{
    private:
    char level;

    public:
    int health;
    
};

int main(){
    Hero ramesh;
    char a;
    ramesh.health = 10;
    cout << ramesh.health<< endl;
    cout << sizeof(ramesh) << endl;
    cout << sizeof(a) << endl;

}