#include<iostream>

using namespace std;

int findPivot(int arr[], int n){
    int st = 0, end = n-1;
    int mid = st + (end - st)/2;

    while(st < end){
        if(arr[mid] >= arr[0])
        st = mid + 1;
        else
        end = mid;

        mid = st + (end - st)/2;
    }
    return st;
}

int main()
{
    int arr[100];

    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = findPivot(arr, n);

    cout<<"Pivot Index of sorted and rotated array is : "<<ans<<endl;

    return 0;
}