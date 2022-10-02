//SEARCH IN A SORTED ROTATED ARRAY
#include<iostream>
using namespace std;

//METHOD-1(NAIVE--->TIME=O(n))
int func1(int arr[],int n,int x){
    for(int i=0;i<n;i++)
    if(arr[i]==x)
        return i;
    return -1;
}

//METHOD-2(EFFICIENT---TIME=O(log(n)))
/* Concept Used---> One half of a sorted rotated array will always be sorted */
int func2(int arr[],int n,int x){
    int low=0,high=n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x)
            return mid;
        
        //If left half is sorted
            if(arr[mid]>arr[low]){
                if(x>=arr[low] && x<arr[mid])
                    high = mid-1;
                else 
                    low = mid+1;
            }
        
        //If right half is sorted
        else{
            if(x>arr[mid] && x<=arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
        return -1;
}

//DRIVER CODE
int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Enter the element to be searched in array: ";
    cin>>x;

    cout<<"Element is present at index: "<<func1(arr,n,x)<<endl;
    cout<<"Element is present at index: "<<func2(arr,n,x)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 6
// Enter elements in array: 10 20 30 40 5 9 
// Enter the element to be searched in array: 5
// Element is present at index: 4
// Element is present at index: 4