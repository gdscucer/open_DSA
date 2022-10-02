#include<iostream>
using namespace std;

int sumElement(int arr[],int n)
{
int sum=0;
for (int i = 0; i < n; i++)
{
sum=sum+arr[i];
}
return sum;

}


int main()
{
int size;
cin>>size;

int arr[100];
//input for the array
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

/*//print the array
for (int n = 0; n< size; n++)
{
    cout<<arr[n]<<" ";
}*/
cout<<"The sum of array is "<<sumElement(arr,size);
    return 0;
}