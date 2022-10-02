#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=2;
    cout<<"Enter no. ";
    cin>>n;
    while (i<n)
    {
        /* code */
        if(n%i==0)
        {
            cout<<"not a prime no."<<i <<endl;
        }
        else{
        cout<<"It is prime for "<<i<<endl;}
        i++;
    }

    



    return 0;
}