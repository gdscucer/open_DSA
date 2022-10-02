#include <iostream>
using namespace std;
bool getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}

int unique(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < size; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
int main()
{

    int arr[10] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};
    cout << unique(arr, 10);
    return 0;
}