#include<iostream>

using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int res = sumOfArray(arr, n);

    cout<<"Sum of entire array = "<<res<<endl;

    return 0;
}