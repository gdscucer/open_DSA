#include <iostream>
using namespace std;
int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int setBit(int num, int pos)
{
    return (num | (1 << pos));
}
int clearBit(int num, int pos)
{
    int mask = ~(1 << pos);
    return (num & mask);
}
int updateBit(int num, int pos, int value)
{
    int mask = ~(1 << pos);
    num = num & mask;
    return (num | (value << pos));
}
int main()
{

    int num = 5;
    cout << getBit(num, 2) << endl;
    cout << setBit(num, 1) << endl;
    cout << clearBit(num, 2) << endl;
    cout << updateBit(num, 1, 1) << endl;

    return 0;
}