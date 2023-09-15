#include<iostream>
using namespace std;

int getMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int arr[] = {1,5,8,9,65,7};
    cout << getMin(arr, 6);

    return 0;
}