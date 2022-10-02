//COUNT OCCURENCES IN A SORTED ARRAY
#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        
        if(arr[mid]>x)
            high = mid-1;
        else if(arr[mid]<x)
            low = mid+1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                high = mid-1;
        }
    }
    return -1;
}

int lastOccur(int arr[],int n,int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        
        if(arr[mid]>x)
            high = mid-1;
        else if(arr[mid]<x)
            low = mid+1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else
                low = mid+1;
        }
    }
    return -1;
}

int func(int arr[],int n,int x){
    int first = firstOccur(arr,n,x);
    if(first == -1)
        return 0;
    else
        return((lastOccur(arr,n,x)-first)+1);
}

int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Enter the element to be counted in array: ";
    cin>>x;

    cout<<"Number of occurences of the entered element in the array is: "<<func(arr,n,x)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 6
// Enter elements in array: 10 20 20 20 40 40
// Enter the element to be searched in array: 20
// Number of occurences of the entered element in the array is: 3