//Problem Statement - Given two values M and N, which represent a matrix[M][N]. 
//                    We need to find the total unique paths from the top-left cell (matrix[0][0]) 
//                    to the rightmost cell (matrix[M-1][N-1]).
//                    At any cell we are allowed to move in only two directions:- bottom and right.

#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j, vector<vector<int>> &dp) 
{
    //Base Cases
    if(i == 0 && j == 0)
        return 1;
    if(i < 0 || j < 0)
        return 0;
    
    //Memoization
    if(dp[i][j] != -1) 
        return dp[i][j];

    int up = solve(i-1, j, dp);//(Down direction in question)
    int left = solve(i, j-1, dp);//(Right direction in question)

    return dp[i][j] = up+left;//Storing the number of ways
}

int main() {

  int m = 3;
  int n = 2;
  vector<vector<int> > dp(m,vector<int>(n,-1)); //2D DP array initialized with -1
  solve(m-1, n-1, dp);
  cout << dp[m-1][n-1];
}

//Time Complexity - O(M*N)
//Space Complexity - O((N-1)+(M-1)) + O(M*N)