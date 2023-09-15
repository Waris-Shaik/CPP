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
int main(){

   int arr[] = {1,5,88,9,65,7};
   cout << getMax(arr, 6);

}