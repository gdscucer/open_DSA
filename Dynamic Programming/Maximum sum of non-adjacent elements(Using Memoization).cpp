//Problem Statement- Given an array of ‘N’  positive integers, we need to return the maximum sum of the subsequence 
//                   such that no two elements of the subsequence are adjacent elements in the array.

#include <bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int>& arr, vector<int>& dp){
    
    //Base Cases
    if(ind == 0) 
        return arr[ind];
    if(ind < 0)  
        return 0;

    if(dp[ind] != -1) //Memoization(Top-Down Approach)
        return dp[ind];
    
    //Recursion Calls to pick the element or leave it 
    int pick = arr[ind] + solve(ind-2, arr,dp);
    int nonPick = 0 + solve(ind-1, arr, dp);
    
    //Return to calling function
    return dp[ind] = max(pick, nonPick);
}

int main() 
{
  vector<int> arr{2,1,4,9}; //Input array
  int n=arr.size();
  vector<int> dp(n+1,-1);   //DP vector to store no. of ways and initializing with -1
  cout << solve(n,arr,dp);
}

//Time Complexity - O(n)
//Space Complexity - O(n) + O(n) = O(n) (Extra O(n) for recursion stack space)