#include<iostream>
using namespace std;
void printArray(int arr[], int size){
cout<<"printing the array"<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<"printing the array"<<endl;


}

int main()
{
    int third[15]={5,7,11};
    cout<<"Value at 0th index "<<third[1] <<endl;
    int n=4;
printArray(third,15);

    n=10;
    int fourth[10]={0};
    printArray(fourth,10);

    return 0;
}