#include<iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10], value = 7;

    cout<<"Sab sahi se chal rha hai!"<<endl;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = value;
    }

    cout<<arr[5]<<endl;
    
    int firstArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printArray(firstArray, 10);


    return 0;
}