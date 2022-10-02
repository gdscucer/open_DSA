

#include <bits/stdc++.h>

using namespace std;

int main(){
    
int a[8][8]={0};
    int n;
    cin>>n;
    while(n--)
    {

    int x,y;cin >> x >> y;
    x--;
    y--;

    
        for(int j=0;j<8;j++)
        {
            a[x][j]=1;
            a[j][x]=1;
        }
    }
    int count=64;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]==0)
            {
                count--;
            }
        }
    }
    cout<<count;
    }
    