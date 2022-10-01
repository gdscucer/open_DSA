#include<iostream>
//for sum of all even no.s upto n
using namespace std;
int main(){

    int n;
    cout<<"Enter no. ";
    cin>>n;
    int i=2;
    int sum=0;

    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"Value of sum is "<<sum<<endl;

}