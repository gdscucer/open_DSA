#include <iostream>
#include <climits>
using namespace std;
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

    cout << "Maximum sum of subarray is " << maxSum;
    return 0;
}