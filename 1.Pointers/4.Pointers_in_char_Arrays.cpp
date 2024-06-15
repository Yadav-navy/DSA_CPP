#include <iostream>
using namespace std;

int main(){
    char ch[6] = "abcde";
    char *ptr = &ch[0];


    cout << ptr << endl;
    cout << ch << endl;
    
    cout << endl;
    cout << &ch[0] << endl;
    cout << ch[0] << endl;
    
    cout << endl;
    cout << &ch << endl;
    cout << &ptr << endl;

    cout << endl;
    char c = 'z';
    char *p = &c;

    cout << &c << endl;
    cout << c << endl;
    cout << p << endl;


}