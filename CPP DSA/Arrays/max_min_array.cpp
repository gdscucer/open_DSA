#include<iostream>

using namespace std;

void maxmin(int arr[], int size)
{
    int maxi = arr[0];
    int mini = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > maxi)
            maxi = arr[i];
        
        if(arr[i] < mini)
            mini = arr[i];
    }

    cout<<"Maximum element of array is : "<<maxi<<endl;
    cout<<"Minimum element of array is : "<<mini<<endl;
}

int main()
{
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    maxmin(arr, n);

    return 0;
}