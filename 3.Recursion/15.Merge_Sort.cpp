#include <iostream>
using namespace std;


void PrintArray(int arr[], int start, int end){
    for (int i = start ; i <= end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Merge(int arr[], int start ,int end){
    int mid = (start + end )/2;

    int len1 = mid - start + 1;
    int len2 = end - mid ;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying in the new array formed
    int k = start;
    // cout << "start "<<start << " "<< end<< endl;
    for (int i = 0 ; i < len1; i++){
        first[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0 ; i < len2; i++){
        second[i] = arr[k];
        k++;
    }
    // cout << "printing two subarrays that are copied" << endl;
    // PrintArray(first , 0 , len1-1);
    // PrintArray(second, 0 , len2-1);
    // cout << endl;

    int a = 0;
    int b = 0; // pointers for comparing two arrays
    k = start;
    while ( a < len1 && b < len2){
        if(first[a] >= second[b]){
            arr[k++] = second[b];
            b++;
        }
        else {
            arr[k++] = first[a];
            a++;
        }
    }
    while (a < len1){
        arr[k++] = first[a++];
    }
    
    while (b < len2){
        arr[k++] = second[b++];
    }
}

void MergeSort(int arr[], int start , int end){
    // PrintArray(arr, start ,end);
    if (start >= end){  //base case
        // cout << "base condition reached" << endl;
        return; 
    }
    int mid = (start + end) / 2;
    

    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    // cout << endl;
    // cout << "Now Executing Merging" << endl;

    Merge(arr,start,end);
    // PrintArray(arr, start ,end);




}
int main(){
    int arr[8] = {6,2,2,2,8,1,20,40};
    int size = 8;
    int start = 0 ;
    int end = size - 1;
    PrintArray(arr, start, end );
    MergeSort(arr, start, end);
    PrintArray(arr, start, end);
}

