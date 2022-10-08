//Problem Statement - Given two values M and N, which represent a matrix[M][N]. 
//                    We need to find the total unique paths from the top-left cell (matrix[0][0]) 
//                    to the rightmost cell (matrix[M-1][N-1]).
//                    At any cell we are allowed to move in only two directions:- bottom and right.

#include <bits/stdc++.h>
using namespace std;

int solve(int m, int n, vector<vector<int>> &dp) 
{
    //Tabulation
    for(int i=0; i<m ;i++)
    {
        for(int j=0; j<n; j++)
        {
            //Base Condition
            if(i == 0 && j == 0)
            {
                dp[i][j] = 1;
                continue;
            }

            int up = 0;
            int left = 0;

            if(i > 0) 
                up = dp[i-1][j];
            if(j > 0)
                left = dp[i][j-1];

            dp[i][j] = up+left;//Storing number of ways
        }
    }
}

int main() {

  int m = 3;
  int n = 2;
  vector<vector<int> > dp(m,vector<int>(n,-1)); //2D DP array initialized with -1
  solve(m, n, dp);
  cout << dp[m-1][n-1];
}

//Time Complexity - O(M*N)
//Space Complexity - O(M*N)