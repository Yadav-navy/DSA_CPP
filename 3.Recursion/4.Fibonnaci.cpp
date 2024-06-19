#include <iostream>
using namespace std;

int fibonnaci(int n){
    if (n == 1 || n == 2 ){
        return 1;
    }
    return fibonnaci(n - 1) + fibonnaci(n - 2);

}

int main(){
    int n;
    cin >> n;
    
    int ans;
    ans = fibonnaci(n);
    cout << ans << endl;
}