#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int xorSum = 0;
    for (int i = 0; i < size; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    return xorSum;
}
int main()
{
    int arr[7] = {2, 4, 6, 3, 4, 6, 2};
    cout << "Unique Number is " << unique(arr, 7);

    return 0;
}