#include<iostream>
using namespace std;

void printArr(int arr[], int size , int start =0){
    for (int i = start ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
    int arr[5] = {2,4,7,8,9};
    int size = 5; 
    printArr(arr, size);
    cout << endl;
    printArr(arr, size, 2);


}