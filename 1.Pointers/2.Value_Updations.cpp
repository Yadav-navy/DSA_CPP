#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int a = num;
    a++;
    cout << a << " " << num << endl;

    int *ptr = &num;
    int b = *ptr;
    b++;
    cout << b << " " << num << endl;

    // updating value throught pointer
    (*ptr)= (*ptr ) * 2;
    cout << "After updation value is "<<num << endl;


    // copy of one pointer to another

    int *q = ptr;
    cout << q << " " << ptr << endl;
    cout << *q << " " << *ptr << endl;
    cout << &ptr << " " << &q << endl;



}