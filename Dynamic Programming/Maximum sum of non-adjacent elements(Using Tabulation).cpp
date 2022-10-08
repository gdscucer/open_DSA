//Problem Statement- Given an array of ‘N’  positive integers, we need to return the maximum sum of the subsequence 
//                   such that no two elements of the subsequence are adjacent elements in the array.

#include <bits/stdc++.h>
using namespace std;

int solve(int ind, vector<int>& arr, vector<int>& dp)
{
    dp[0]= arr[0];
    
    //Tabulation(Bottom-Up Approach)
    for(int i=1 ;i<ind; i++)
    {
        int pick = arr[i];

        if(i>1)
            pick += dp[i-2];

        int nonPick = 0+ dp[i-1];
        
        dp[i]= max(pick, nonPick);
    }
    return dp[ind-1];
}

int main() 
{
  vector<int> arr{2,1,4,9}; //Input array
  int n=arr.size();
  vector<int> dp(n+1,-1);   //DP vector to store no. of ways and initializing with -1
  cout << solve(n,arr,dp);
}

//Time Complexity - O(n)
//Space Complexity - O(n)