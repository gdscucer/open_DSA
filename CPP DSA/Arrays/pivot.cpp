#include<bits/stdc++.h>

using namespace std;

int findPivot(vector<int>& arr){
    int rightSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;

    for(int i = 0; i < arr.size(); i++){
        rightSum -= arr[i];

        if(leftSum == rightSum){
            return i;
        }

        leftSum += arr[i];
    }
    return -1;
}

int main()
{
    vector<int> vec;

    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    int ans = findPivot(vec);

    cout<<"Pivot Index is : "<<ans<<endl;

    return 0;
}