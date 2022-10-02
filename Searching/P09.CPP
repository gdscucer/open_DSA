//WAP TO FIND PEAK ELEMENT IN ARRAY
#include<iostream>
using namespace std;

int func1(int arr[],int n){
    if(n==1) return arr[0];
    if(arr[0]>=arr[1]) return arr[0];
    if(arr[n-1]>=arr[n-2]) return arr[n-1];
    for(int i=1;i<n-1;i++)
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            return arr[i];
}

int func2(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
            return arr[mid];
        if(mid>0 || arr[mid-1]>=arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Peak element is: "<<func1(arr,n)<<endl;
    cout<<"Peak element is: "<<func2(arr,n)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 5
// Enter elements in array: 5 10 20 15 7
// Peak element is: 20
// Peak element is: 20