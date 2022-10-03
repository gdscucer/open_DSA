#include<iostream>

using namespace std;

int countSubsets(int arr[], int n, int sum)
{
    //Base Case
    if(n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }

    //Recursive Call
    return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    int count = countSubsets(arr, n, sum);

    cout<<"Total number of subsets with given sum are : "<<count<<endl;

    return 0;
}