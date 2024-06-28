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

    // Copy Constructor
    Hero(Hero& temp){
        cout << "Copy Constructor Called"<< endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    
    // getter
    int gethealth(){
        return health;
    }
    void sethealth(int n){
        health = n;
    }

    void print(){
        cout << health << endl;
        cout << level << endl;
    }



};

int main(){
    Hero a(10,'A');
    Hero b(a); 

    a.print();
    b.print();



}