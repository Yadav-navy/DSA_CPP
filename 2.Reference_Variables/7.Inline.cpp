#include<iostream>
using namespace std;

inline int getmax(int a, int b){
    return ((a > b) ? a : b );
}
int main(){
    int a = 1 , b = 20;
    cout << getmax(a,b) << endl;
}