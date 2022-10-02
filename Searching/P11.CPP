//MEDIAN OF TWO SORTED ARRAYS
#include<iostream>
#include<limits.h>
using namespace std;

double func(int a1[],int a2[],int n1,int n2){
    int begin=0,end=n1;
    while(begin<=end){
        int i1 = (begin+end)/2;
        int i2 = (n1+n2+1)/2 - i1;

        int min1 = (i1==n1)?INT_MAX:a1[i1];
        int max1 = (i1==0)?INT_MIN:a1[i1-1];
        int min2 = (i2==n2)?INT_MAX:a2[i2];
        int max2 = (i2==0)?INT_MIN:a2[i2-1];
        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((double)max(max1,max2)+min(min1,min2))/2;
            } else return (double)max(max1,max2);
        }
        else if(max1>min2) end=i1-1;
             else begin=i1+1;

    }
}

int main(){
    int n1,n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    int a1[n1];
    cout << "Enter elements in first array: ";
    for (int i = 0; i < n1; i++)
        cin >> a1[i];

    cout << "Enter the size of second array: ";
    cin >> n2;
    int a2[n2];
    cout << "Enter elements in second array: ";
    for (int i = 0; i < n2; i++)
        cin >> a2[i];

    cout<<"Median of 2 sorted arrays is: "<<func(a1,a2,n1,n2)<<endl;
    return 0;
}

/*OUTPUT*/
// Enter the size of first array: 4
// Enter elements in first array: 30 40 50 60
// Enter the size of second array: 5
// Enter elements in second array: 5 6 7 8 9
// Median of 2 sorted arrays is: 9