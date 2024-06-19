#include<iostream>
using namespace std;

void sayDigits(int n){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n == 0){
        return ;
    }

    sayDigits(n/10);

    cout << arr[n%10] << endl;


}

int main(){
    int n ;
    cin >> n;

    sayDigits(n);
}