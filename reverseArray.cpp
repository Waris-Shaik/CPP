#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'w', 'a', 'r', 'i', 's'}; 
    int length = sizeof(arr) / sizeof(char);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}