#include<iostream>
using namespace std;
void reversePairs(int arr[], int size){
  
    for(int i=0; i<size; i+=2){
        int temp = arr[i];
        arr[i] = arr[i +1];
        arr[i +1] = temp;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[12] = {1,5,  6,9,  11,32,  45,85, 9,5,   4,3};
    reversePairs(arr, 12);


    return 0;
} 