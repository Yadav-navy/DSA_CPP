#include<iostream>
using namespace std;

int getSum(int *arr, int size){
    cout << "Sum inside function is " << sizeof(arr) << endl;
    int sum = 0;
    for(int i =0 ; i < size ; i++){
        sum += *(arr+i);

    }
    return sum;
}
int main(){
    int arr[10] = {1,2,3,4,5,6};
    cout << sizeof(arr) << endl;
    cout << "Sum is " << getSum(arr+2,8) << endl;
    int *ptr = arr;
    cout << *(ptr+2) << endl;
    cout << arr << endl;
    cout << *(arr+2) << endl;
}