#include <iostream>
using namespace std;

int SumArray(int arr[], int size){
    if (size == 0){
        return 0;
    }
    return arr[0] + SumArray(arr + 1, size - 1);

}

int main(){
    int arr[6] = {1,1,1,1,1,1};
    int size = 6;
    int ans = SumArray(arr, size );
    cout << ans << endl;
}