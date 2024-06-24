#include <iostream>
using namespace std;


void PrintArray(int arr[], int start, int end){
    for (int i = start ; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Partision(int arr[], int start ,int end){
    int pivot = arr[start];
    // cout << "Pivot is "<< pivot << endl;
    int position = 0;
    for(int i = start + 1 ;i <= end; i++){
        if (pivot >= arr[i]){
            position++;
        }
    }
    // cout << "Position is "<< position << endl;
    int correct_position = start + position;
    // swap
    swap(arr[start],arr[correct_position]);

    // Now for moving smaller elements to left of pivot and larger element to right of pivot
    int a = 0;
    int b = end;

    while( a < correct_position && b > correct_position){
        if (arr[a] <= pivot){
            a++;
        }
        if (arr[b] > pivot){
            b--;
        }
        if(arr[a] > pivot && arr[b] < pivot){
            swap(arr[a],arr[b]);
            a++ ;
            b--;
        }
    }
    // cout << "Inside Partision " << endl;
    // PrintArray(arr, start ,end);
    // cout << endl;
    return correct_position;

}



void QuickSort(int arr[], int start ,int end){
    // PrintArray(arr, start ,end);
    // base case
    if (start >= end){
        return;
    }

    int p = Partision(arr, start ,end);
    QuickSort(arr, start, p - 1);
    QuickSort(arr, p+1 , end);


}

int main(){
    int arr[8] = {6,2,2,2,8,1,20,40};
    int size = 8;
    int start = 0 ;
    int end = size - 1;
    PrintArray(arr, start, end );
    QuickSort(arr, start, end);
    PrintArray(arr, start, end);
}
