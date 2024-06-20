#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target){
    if (size == 0){
        return false;
    }
    if (arr[0] == target){
        return true;
    }
    else{
        bool ans = LinearSearch(arr + 1, size -1, target);
        return ans;
    }
    

}

int main(){
    int arr[6] = {1,4,7,11,19,8};
    int size = 6;
    int target = 11;
    int ans = LinearSearch(arr, size, target);
    cout << ans << endl;
}