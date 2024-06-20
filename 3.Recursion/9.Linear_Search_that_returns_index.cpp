#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    if (size == 0){
        return -1;
    }
    if (arr[0] == target){
        return 1;
    }
    else{
        int ans = LinearSearch(arr + 1, size -1, target);
        if (ans != -1){
            return 1 + ans ;
        }
        return ans;
    }
    

}

int main(){
    int arr[6] = {1,4,7,10,19,11};
    int size = 6;
    int target = 11;
    int ans = LinearSearch(arr, size, target);
    if (ans == -1){
        cout << "Element not found" << endl;
    }
    else {
        cout << (ans-1) << endl; 
    }

}