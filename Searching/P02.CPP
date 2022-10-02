//TO FIND INDEX OF 1ST OCCURENCE IN A SORTED ARRAY
#include<iostream>
using namespace std;

//METHOD-1(ITERATIVE APPROACH)
int func1(int arr[],int n,int x){
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

//METHOD-2(RECURSIVE APPROACH)
int func2(int arr[],int n,int x,int low,int high){
    int mid = (low+high)/2;

    if(low>high)
        return -1;

    if(arr[mid]>x){
        high = mid-1;
        return func2(arr,n,x,low,high);
    }
    else if(arr[mid]<x){
        low = mid+1;
        return func2(arr,n,x,low,high);
    }
    else{
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                return func2(arr,n,x,low,mid-1);
        }
        
}

int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0,high = n-1;

    cout<<"Enter the element to be searched in array: ";
    cin>>x;

    cout<<"Element is present at index: "<<func1(arr,n,x)<<endl;
    cout<<"Element is present at index: "<<func2(arr,n,x,low,high)<<endl;
    
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 7
// Enter elements in array: 1 10 10 10 20 20 40
// Enter the element to be searched in array: 20
// Element is present at index: 4
// Element is present at index: 4