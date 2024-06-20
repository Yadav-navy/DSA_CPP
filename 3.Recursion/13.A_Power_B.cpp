#include <iostream>
using namespace std;

int Power(int a, int b){
    if (b == 0){   // base case
        return 1;
    }

    if (b == 1){
        return a;
    }
    if (b % 2 == 0){ // b is even
        return Power(a , b/2) * Power(a , b/2);
    }
    else{
        return a *  Power(a , b/2) * Power(a , b/2);
    }
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    int ans = Power(a,b);

    cout << ans << endl;
    
}