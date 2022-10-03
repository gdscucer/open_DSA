#include<iostream>

using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        return true;
    }
    return false;
}

int main()
{
    int n = 20;
    int arr[20] = {1, 7, -11, 39, 25, 47, 99, -24, 69, -56, 13, 16, 86, 92, -32, -67, -78, 80, 30, 2};

    int key;
    cout<<"Enter element to search for : ";
    cin>>key;

    bool isFound = linearSearch(arr, n, key);

    if(isFound)
    {
        cout<<"Element is present in array!"<<endl;
    }
    else
    {
        cout<<"Element is not present in array!"<<endl;
    }
    
    return 0;
}