#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    cout << linearSearch(arr, 10, -22);

    return 0;
}