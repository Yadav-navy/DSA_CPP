#include<iostream>
using namespace std;

void update(int *p){
    *p = *p * 2;
    cout << *p << endl;
    p = p + 1;
    cout << endl;
    cout << p << endl;
    cout << endl;


}
int main(){
    int value = 5;
    int *ptr = &value;
    cout << "Before Update function" << endl;
    cout << ptr << endl;
    cout << value << endl;
    cout << *ptr << endl;


    update(ptr);

    cout << "After Update function" << endl;
    cout << ptr << endl;
    cout << value << endl;
    cout << *ptr << endl;
    cout << endl;

}