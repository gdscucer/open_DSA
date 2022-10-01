#include <iostream>
using namespace std;
bool pairSum(int arr[], int size, int k)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " and " << j << endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout << pairSum(arr, 8, k);

    return 0;
}