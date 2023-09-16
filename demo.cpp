#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
}




int main(){

int arr[6] = {1,5,8,9,65,7};
reverseArray(arr, 6);

  
    
 
    return 0; 
}