#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end, int size)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(int arr[], int d, int n)
{
    d = d % n;
    reverseArray(arr, 0, d - 1, n - 1);
    reverseArray(arr, d, n - 1, n - 1);
    reverseArray(arr, 0, n - 1, n - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotateArray(arr, 2, 5);

    return 0;
}