#include<iostream>

using namespace std;

int getPivot(int arr[], int n){
    int st = 0, end = n-1, mid = st + (end - st)/2;

    while(st < end){
        if(arr[mid] >= arr[0]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
        mid = st + (end - st)/2;
    }
    return st;
}

int binarySearch(int arr[], int start, int end, int k){
    int s = start, e = end, mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}

int main()
{
    int n;
    int arr[100];

    cout<<"Enter size of array : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the element to search for: ";
    cin>>k;

    int pivot = getPivot(arr, n);

    int res;

    if (k >= pivot && k <= arr[n-1]){
        res = binarySearch(arr, pivot, n-1, k);
    }
    else{
        res = binarySearch(arr, 0, pivot -1, k);
    }
    
    if(res != -1){
        cout<<"Element is present at Index: "<<res<<endl;
    }
    else{
        cout<<"Element is not present in the array!"<<endl;
    }

    return 0;
}