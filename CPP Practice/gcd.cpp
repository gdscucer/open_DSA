#include <iostream>
using namespace std;

int euclid_gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    int dividend = a;
    int divisor = b;
    while (divisor != 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

int main()
{
    cout << euclid_gcd(0, 7) << endl;
    cout << euclid_gcd(55, 78) << endl;
    cout << euclid_gcd(105, 350) << endl;
    cout << euclid_gcd(350, 105) << endl;
    return 0;
}