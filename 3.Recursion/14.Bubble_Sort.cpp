#include<iostream>
using namespace std;


void PrintArray(int arr[], int size){
    for (int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[],int size){
    
    // base case - already sorted
    if (size == 1 || size == 0){
        return;
    }
    // 1 case solve kr liya largest element last mei pahuch gya
    for (int i = 0; i < (size-1) ; i++){
        if (arr[i] > arr[i + 1]){
            swap(arr[i],arr[i + 1]); 
            }
    }

    BubbleSort(arr , size - 1);
}


int main(){
    int arr[6] = {6,75,4,3,2,1};
    int size = 6;
    PrintArray(arr,size );
    BubbleSort(arr,size);
    PrintArray(arr,size);
}

