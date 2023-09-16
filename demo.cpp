#include<iostream>
using namespace std;

void swapAlternative(int arr[], int size){
    int start = 0;
    int end = size +1;

    while(start <= end){
        int temp = arr[start];
        arr[start] =  arr[start+1];
        arr[start+1] = temp;
        start+=2;
        end--;
    }
   

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[8] = {1,5, 6,9, 11,32, 45,85};
    swapAlternative(arr,8);
}