#include <iostream>
using namespace std;
// find all pairs whose sum is X
int findPairs(int arr[], int n, int sum)
{

    int start = 0;
    int end = n - 1;
    int ans = 0;
    int k = 0;

    while (start < end)
    {
        k = arr[start] + arr[end];
        if (k == sum)
        {
            ans++;
            start++;
            end--;
        }
        else if (k > sum)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    if (ans == 0)
        return -1;
    return ans;
}

int main()
{

    int arr[6] = {1, 5, 7, 10, 11, 16};
    cout << findPairs(arr, 6, 17);

    return 0;
}