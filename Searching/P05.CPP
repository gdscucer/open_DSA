//COUNT 1s IN A SORTED BINARY ARRAY
#include<iostream>
using namespace std;

//METHOD-1(NAIVE APPROACH)--->TIME=O(n) in worst case if there's no 1 in array
int func1(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            return n-i;
    }
    return 0;
}

//METHOD-2(EFFICIENT APPROACH)--->TIME=O(Log(n))
int func2(int arr[],int n){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == 0)
            low = mid+1;
        else {
            if(mid == n-1 || arr[mid-1]!=arr[mid])
                return n-mid;
            else
                high = mid-1;
        }
        
    }
    return 0;
}


int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter only binary elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Enter the element to be counted in array: ";
    cin>>x;

    cout<<"Number of occurences of 1 in the array is: "<<func1(arr,n)<<endl;
    cout<<"Number of occurences of 1 in the array is: "<<func2(arr,n)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 5
// Enter only binary elements in array: 0 0 1 1 1 
// Enter the element to be counted in array: 1
// Number of occurences of 1 in the array is: 3
// Number of occurences of 1 in the array is: 3