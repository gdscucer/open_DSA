//SEARCH IN AN INFINITE SORTED ARRAY
#include<iostream>
using namespace std;

//METHOD-1(NAIVE--->TIME=O(position))
int func1(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x) return i;
        if(arr[i]>x) return -1;
        i++;
    }
}

//METHOD-2(EFFICIENT---TIME=O(log(position)))
int bSearch(int arr[],int x,int low,int high){
    int mid = (low+high)/2;

    if(low>high)
        return -1;

    if(arr[mid] == x)
        return mid;
    else if(arr[mid]>x){
        high = mid-1;
        return bSearch(arr,x,low,high);
    }
    else{
        low = mid+1;
        return bSearch(arr,x,low,high);
    }
}

int func2(int arr[],int x){
    if(arr[0]==x) return 0;

    int i=1;
    while(arr[i]<x)
        i=i*2;
    if(arr[i]==x) return i;
    return bSearch(arr,x,i/2+1,i-1);
}

//DRIVER CODE
int main(){
    int n,x;
    cout << "Enter the size of array in 3-digits i.e. make it an infinite size array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0,high = n-1;

    cout<<"Enter the element to be searched in array: ";
    cin>>x;

    cout<<"Element is present at index: "<<func1(arr,x)<<endl;
    cout<<"Element is present at index: "<<func2(arr,x)<<endl;
    return 0;
}