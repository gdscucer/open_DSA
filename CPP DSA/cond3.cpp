#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout<<"Print sum of even no.s till: ";
cin>>n;

for ( i = 1; i <=n; i++)
{
    /* code */if ((i%2)==0)
    {
        sum = sum+i;
    }
    
}

cout<<"The value of sum is " <<sum <<endl;
     
}