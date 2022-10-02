//REPEATING ELEMENTS--> To find the element in array which is repeated.
#include<iostream>
using namespace std;

//METHOD-1(NAIVE--->TIME COMPLEXITY = O(n^n))
int func1(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j])
                return arr[i];
    }
}

//METHOD-2(Slightly Optimized--->TIME COMPLEXITY = O(nlogn))
//Step-1--> Sort the given array.
//Step-2--> Then run a for loop as:-
            // for(int i=0;i<n-1;i++)
            //     if(arr[i]==arr[i+1])
            //         return arr[i];


//METHOD-3(Efficient-->TIME and AUX. SPACE = O(n))
int func3(int arr[],int n){
    bool visited[n] = {false};
    for(int i=0;i<n;i++){
        if(visited[arr[i]])
            return arr[i];
        visited[arr[i]] = true;
    }
}

//METHOD-4(Most Efficient-->TIME = O(n) and AUX. SPACE = O(1))
int func4(int arr[],int n){

}

//DRIVER CODE
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<"The repeating element is: "<<func1(arr,n)<<endl;
    cout<<"The repeating element is: "<<func3(arr,n)<<endl;
    // cout<<"The repeating element is: "<<func4(arr,n)<<endl;

    return 0;
}

/*OUTPUT*/
// Enter the size of array: 6
// Enter elements in array: 0 2 1 3 2 2 
// The repeating element is: 2
// The repeating element is: 2
// The repeating element is: 2
