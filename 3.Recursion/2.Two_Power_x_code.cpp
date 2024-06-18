#include <iostream>
using namespace std;

int PowerOfTwo(int x){
    if (x == 0 ){
        return 1;
    }
    int smallerProblem = PowerOfTwo(x-1);
    int biggerProblem = 2 * smallerProblem ;
    return biggerProblem;
}
int main(){
    int x;
    cin >> x;

    int ans;
    ans = PowerOfTwo(x);

    cout << ans << endl;
}