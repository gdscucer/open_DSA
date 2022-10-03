#include<iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = (n - 1);

    while(i <= j)
    {
        int temp = arr[i];
        arr[i++] = arr[j];
        arr[j--] = temp;
    }
    
    cout<<"Array after reversing become : "<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[1000];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before reversing is : "<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, n);

    return 0;
}