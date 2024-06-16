#include<iostream>
using namespace std;

void update (int n ){
    n++;
}

void update2 (int& n ){
    n++;
}

int main(){
    int i = 5;
    cout << "Before " << i << endl;
    update(i);
    cout << "After " << i << endl;
    cout << endl;
    cout << "Before " << i << endl;
    update2(i);
    cout << "After " << i << endl;
}