#include <iostream>
using namespace std;
int powerOf2(int num)
{
    return (num && !(num & (num - 1)));
}
int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    cout << powerOf2(num);
    return 0;
}