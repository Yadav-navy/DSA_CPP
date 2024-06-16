#include<iostream>
using namespace std;

int getsum(int* arr, int n){
    int sum = 0;
    for (int i =0 ; i < n; i++){
        sum += *(arr + i);
    }
    return sum;
}

int main(){
    cout << endl;
    int n;
    cout << "Size of Array is " << endl;
    cin >> n ;

    // Heap memory created
    int* arr = new int[n];
    
    cout << "Write the elements in array " << endl;
    for(int i =0 ; i < n ; i++){
        cin >> arr[i] ;

    }

    cout << "Sum is " << getsum(arr, n ) << endl;
    cout << endl;

}