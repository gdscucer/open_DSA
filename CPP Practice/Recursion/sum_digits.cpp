#include<iostream>

using namespace std;

int sumOfDigits(int n)
{
    if(n==0)
    return 0;

    return ((n%10) + sumOfDigits(n/10));
}

int main()
{
    int n;
    cin>>n;
    int ans = sumOfDigits(n);

    cout<<"Sum of digits is : "<<ans<<endl;

    return 0;
}