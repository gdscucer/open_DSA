/* Given an unsorted array and a number x, we need to find if there's a pair in the array with sum equals to x. */
#include<iostream>
using namespace std;

//METHOD-1(NAIVE APPROACH)--->TIME=O(n^n) 
bool func1(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x)
                return true;
        }
    }
    return false;
}

//METHOD-2(EFFICIENT APPROACH)--->TIME and AUX. SPACE=O(n) using HASHING



/* Given a sorted array and a number x, we need to find if there's a pair in the array with sum equals to x. */
//Using TWO POINTER APPROACH(TIME=O(n))
bool twoPointer(int arr[],int n,int x){
    int left = 0,right = n-1;
    while(left<right){
        if(arr[left] + arr[right] == x)
            return true;
        else{
            if(arr[left] + arr[right] > x)
                right--;
            else
                left++;
        }
    }
    return false;
}


/* Given a sorted array and a number x, we need to find if there exists a triplet in the array with sum equals to x. */
//Using Linear Search and Two-Pointer approach(TIME=O(n^n))
bool twoPointer(int arr[],int n,int x,int left, int right){
    while(left<right){
        if(arr[left] + arr[right] == x)
            return true;
        else{
            if(arr[left] + arr[right] > x)
                return(arr,n,x,left,right--);
            else
                return(arr,n,x,left++,right);
        }
    }
    return false;
}

int func(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(twoPointer(arr,n,x-arr[i],i+1,n-1))
            return true;
    }
    return false;
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

    cout<<"Enter any number: ";
    cin>>x;

    cout<<"Does a pair exist in the given array whose sum is equal to the entered number? "<<func1(arr,n,x)<<endl;
    cout<<"Does a pair exist in the given array whose sum is equal to the entered number? "<<twoPointer(arr,n,x)<<endl;
    cout<<"Does a triplet exist in the given array whose sum is equal to the entered number? "<<func(arr,n,x)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 7
// Enter elements in array: 3 5 9 2 8 10 11
// Enter any number: 17
// Does a pair exist in the given array whose sum is equal to the entered number? 1
// Does a pair exist in the given array whose sum is equal to the entered number? 1
//Does a triplet exist in the given array whose sum is equal to the entered number? 0