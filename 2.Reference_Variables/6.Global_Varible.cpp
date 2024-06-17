#include <iostream>
using namespace std;
int a = 5;
void func(){
    cout << a << endl;
    a++;
}
int main(){
    cout << a << endl;
    a++;
    func();
    cout << a << endl;

}