#include <iostream>
using namespace std;
int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
void unique(int arr[], int size)
{
    // step1 - total xor which contain 2 unique element
    int xorSum = 0;
    for (int i = 0; i < size; i++)
    {
        xorSum = xorSum ^ arr[i];
    }

    int temp = xorSum;
    int pos = 0, setBit = 0;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        pos++; // we get setBit position
        xorSum = xorSum >> 1;
    }

    int newXor = 0;
    // XOR of all posssible element in an aaray which has setBit at that position
    for (int i = 0; i < size; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            newXor = newXor ^ arr[i];
        }
    }

    cout << "First Element is " << newXor << endl;
    cout << "second Element is " << (newXor ^ temp) << endl;
}

int main()
{
    int arr[8] = {1, 2, 3, 1, 2, 3, 5, 7};
    unique(arr, 8);

    return 0;
}