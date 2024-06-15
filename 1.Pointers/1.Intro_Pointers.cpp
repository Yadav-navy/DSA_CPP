#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;

    cout << "Adress of num " << &num << endl;

    int *ptr = &num;
    cout << "For pointer " << *ptr << endl;
    cout << ptr << endl;

    double d = 4.2;
    double *p2 = &d;
    cout << d << endl;
    cout << "Adress of double " << &d << endl;
    cout << "For pointer " << *p2 << endl;
    cout << p2 << endl;

    // for checking size
    cout << "size of int is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;
    cout << "size of pointer is " << sizeof(p2) << endl;
    cout << "size of double " << sizeof(d) << endl;

 }