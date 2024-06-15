#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,5,7};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr << endl;


    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr+2) << endl;
    cout << arr[2] << endl;
    cout << *(arr)+2 << endl;
    cout << 3[arr] << endl;

    cout << endl;
    cout << "Next part " << endl;
    

    int *ptr = arr;
    cout << arr << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    
    cout << endl;
    cout << "Size Concept" << endl;
    
    cout << sizeof(ptr) << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr) << endl;
    cout << sizeof(*ptr) << endl;

    cout << endl;
    cout << *ptr + 5 << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    ptr = ptr + 2;
    cout << "After the update " << endl;
    cout << ptr << endl;
    cout << &ptr << endl;


}