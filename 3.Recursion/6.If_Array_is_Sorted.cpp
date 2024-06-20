#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if (size == 1 || size == 0){
        return true;
    }
    if (arr[size - 1] <= arr[size - 2]){
        return false;}
    else{
        bool ans = isSorted(arr, size - 1);
        return ans;
    }


}

int main(){
    int arr[6] = {2,4,6,8,9,11};
    int size = 6;
    bool ans = isSorted(arr , size);

    cout << ans << endl;
}