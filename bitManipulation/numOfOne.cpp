#include <iostream>
using namespace std;
int numberOf1(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num & num - 1;
        count++;
    }

    return count;
}
int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    cout << "Number of 1 in " << num << " is " << numberOf1(num);
    return 0;
}