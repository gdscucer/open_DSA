//Given an array of 'n' no. of pages of 'n' different books and a variable 'k' representing no. of students required to read those pages 
//in a contiguous way. Our task is to find the minimum possible value of the maximum pages read by a student.

#include<iostream>
#include<limits.h>
using namespace std;

//METHOD-1(NAIVE RECURSIVE APPROACH)
int sum(int arr[],int begin,int end){
    int sum = 0;
    for(int i=begin;i<=end;i++)
        sum+=arr[i];
    return sum;
}

int minPages1(int arr[],int n,int k){
    if(k==1) return sum(arr,0,n-1);
    if(n==1) return arr[0];
    int res = INT_MAX;
    for(int i=1;i<n;i++){
        res = min(res,max(minPages1(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}

//METHOD-2(BINARY SEARCH APPROACH)
bool isFeasible(int arr[],int n,int k,int ans){
    int req = 1,sum = 0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>ans){
            req++;
            sum = arr[i];
        }
        else
            sum+=arr[i];
    }
    return(req<=k);
}

int minPages2(int arr[],int n,int k){
    int mx = 0,sum = 0,res=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx = max(mx,arr[i]);
    }
    int low = mx,high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(isFeasible(arr,n,k,mid)){
            res = mid;
            high = mid-1;
        } else 
            low = mid+1;
    }
    return res;
}

int main(){
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter no. of pages for each book in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"Enter no. of students: ";
    cin>>k;

    cout<<"Minimum value of the maximum pages read by a student is: "<<minPages1(arr,n,k)<<endl;
    cout<<"Minimum value of the maximum pages read by a student is: "<<minPages2(arr,n,k)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of array: 8
// Enter no. of pages for each book in array: 10 5 30 1 2 5 10 10
// Enter no. of students: 3
// Minimum value of the maximum pages read by a student is: 30
// Minimum value of the maximum pages read by a student is: 30