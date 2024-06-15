#include<iostream>
using namespace std;

void update(int** ptr2){
    // ptr2 = ptr2 + 2;
    // *ptr2 = *ptr2 + 2;
    **ptr2 = **ptr2 + 2;
 
    // cout << ptr2 << endl;
}

int main(){
    int val = 5;
    int* ptr = &val;
    int** ptr2 = &ptr;

    cout << endl;
    cout << "Before update" << endl;
    cout << val << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

    update(ptr2);

    cout << endl;
    cout << "After update" << endl;
    cout << val << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

}