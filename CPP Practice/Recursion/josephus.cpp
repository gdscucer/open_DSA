#include<iostream>

using namespace std;

int josephus(int n, int k)
{
    //Base Case
    if(n == 1)
    {
        return 0;
    }
    else
    {
        return ((josephus(n-1, k) + k) % n);
    }
}

int main()
{
    int n, k;
    cin>>n>>k;

    int ans = josephus(n, k);

    cout<<"Surviving Person Location is : "<<ans<<endl;

    return 0;
}