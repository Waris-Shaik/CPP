#include <iostream>
using namespace std;

// another approach
void reverseArray(char arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr[5] = {'w', 'a', 'r', 'i', 's'};
    int length = sizeof(arr) / sizeof(char);

    for (int i = 0; i < length / 2; i++) // one approach
    {
        char temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    // reverseArray(arr, 5);
}