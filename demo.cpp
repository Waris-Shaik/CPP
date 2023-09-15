#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


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
cout << getMax(arr, 6) << endl;
cout << getMin(arr,6);

  
    
 
    return 0;
}