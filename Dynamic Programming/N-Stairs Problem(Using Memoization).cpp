// Problem Statement - Given a number of stairs(N).Calculate number of
//                     distinct ways to climb from 0th step to Nth step.

#include <bits/stdc++.h>
using namespace std;

int solver(int n, vector<int>& dp)
{
    if(n<=1)    //Base Case of Recursion
        return 1;
    
    if(dp[n]!= -1)  //Memoization(Top-Down Approach)
        return dp[n];
    
    return dp[n]=solver(n-1,dp) +solver(n-2,dp);    //Recursion for n-1 step & n-2 step
}


int main()
{
    int n=5;    //No. of stairs  
    vector<int> dp(n+1,-1); //DP vector to store no. of ways and initializing with -1
    cout << solver(n,dp);   
}

//Time Complexity - O(n)
//Space Complexity - O(n) + O(n) = O(n) (Extra O(n) for recursion stack space)