#include <iostream>
#include <climits>
using namespace std;
int kadane_Sum(int arr[], int size)
{
    int maxSum = INT_MIN;

    int currSum = 0;
    for (int i = 0; i < size; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main()
{
    int size;
    cout << "Enter the size of an array ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int normalSum = kadane_Sum(arr, size);
    int totalSum = 0, circularSum;
    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    circularSum = totalSum - (-kadane_Sum(arr, size));
    cout << "Maximum sum of subarray is " << max(circularSum, normalSum);
    return 0;
}