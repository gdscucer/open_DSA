//TO FIND SQUARE ROOT OF A NUMBER.
#include<iostream>
using namespace std;

//METHOD-2(EFFICIENT--->TIME=O(Log(n)))
int func(int n){
    int low=1,high=n,ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int mSq = mid*mid;
        if(mSq==n)
            return mid;
        else if(mSq>n){
            high = mid-1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

//METHOD-1(NAIVE--->TIME=O(sqrt(n)))
    int i=1;
    while(i*i<=n)
        i++;
    cout<<"Square root of the number is: "<<i-1<<endl;
    cout<<"Square root of the number is: "<<func(n)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter a number: 13
// Square root of the number is: 3
// Square root of the number is: 3