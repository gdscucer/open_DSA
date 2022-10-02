#include <iostream>
using namespace std;
void subsets(int arr[], int size)
{
    for (int i = 0; i < 1 << size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // cout << (i & (1 << j)) << " ";
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);
    return 0;
}