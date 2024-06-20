#include<iostream>
using namespace std;

void printArray(int arr[],int size,int start ,int end){
    for (int i = start; i <= end ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool BinarySearch(int arr[], int size , int target, int start ,int end){
    printArray(arr, size,start,end);
    if (start > end){
        return false;
    }
    int mid = start + (end-start)/2;
    if (arr[mid] == target){
        return true;
    }
    else if(arr[mid] > target){
        end = mid - 1;
        return BinarySearch(arr, end - start + 1  ,target,start ,end);
    }
    else{
        start = mid + 1;
        return BinarySearch(arr, end - start + 1  ,target, start ,end);
    }
}
int main(){
    int arr[6] = {1,2,5,6,7,11};
    int size = 6;
    int target = 11;
    int start = 0;
    int end = size - 1;
    int ans = BinarySearch(arr, size, target, start ,end);

    cout << ans << endl;
}


// #include<iostream>
// using namespace std;

// void printArray(int arr[],int size,int start ,int end){
//     for (int i = start; i <= end ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int BinarySearch(int arr[], int size , int target, int start ,int end){
//     printArray(arr, size,start,end);
//     if (start > end){
//         return -1;
//     }
//     int mid = start + (end-start)/2;
//     if (arr[mid] == target){
//         return mid;
//     }
//     else if(arr[mid] > target){
//         end = mid - 1;
//         return BinarySearch(arr, end - start + 1  ,target,start ,end);
//     }
//     else{
//         start = mid + 1;
//         return BinarySearch(arr, end - start + 1  ,target, start ,end);
//     }
// }
// int main(){
//     int arr[6] = {1,2,5,6,7,11};
//     int size = 6;
//     int target = 11;
//     int start = 0;
//     int end = size - 1;
//     int ans = BinarySearch(arr, size, target, start ,end);

//     cout << ans << endl;
// }