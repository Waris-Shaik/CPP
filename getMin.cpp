#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr[6] = {1,5,8,9,65,7};
    cout << getMin(arr, 6);

    return 0;
}