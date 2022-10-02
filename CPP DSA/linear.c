#include<stdio.h>
int linear(int n, int k, int arr[])
{
    n--;
    if (n<=0)
    return -1;
    else
    {
    if (arr[n]==k)
    return n;
    else
    return linear(n,k,arr)
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=5;
    int ans=linear(n,k,arr);
    printf(ans);
}
