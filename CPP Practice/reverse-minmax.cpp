

                //    LINEAR SEARCH

#include <iostream>
#include <climits>
using namespace std;

                           /*

bool search(int arr[], int size, int key) {

    for (int  i= 0; i<size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }

    return 0;
}

 int main () {

     int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

     cout << "Enter the element to search for " << endl;
     int key;
     cin >> key;

     bool found = search(arr, 10, key);

     if (found) {
         cout << "Key is present" << endl;

     }
     else {
         cout << "key is absent" << endl;
     }



                //  In given ARRAY tell maximum and minimum :)


    int getMin(int num[], int n) {

        int mini = INT_MAX;

        for(int i = 0; i<n ; i++) {
            mini = min(mini, num[i]);


        }
        return mini;

    }

    int getMax(int num[], int n) {

        int maxi = INT_MIN;

        for(int i = 0; i<n ; i++) {
            maxi = max(maxi, num[i]);


        }
        return maxi;

    }

     int main () {

         int size;
         cin >> size;

         int num[100];

         for (int  i = 0; i<size; i++) {
             cin >> num[i];
         }

         cout << "maximum value is" << getMax(num, size) << endl;
         cout << "Minimum value is " << getMin(num, size) << endl;



        //  Reverse of an ARRAY

         void reverse(int arr[], int n) {

             int start = 0;
             int end = n-1;

             while (start<=end) {
                 swap(arr[start], arr[end]);
                 start++;
                 end--;
             }
         }

         void printArray(int arr[], int n) {

             for (int i=0; i<n; i++) {
                 cout << arr[i] << " ";
             }
             cout << endl;
         }

         int main () {

             int arr[6] = {1,4,0,5,-2,15};
             int brr[5] = {2,6,3,9,4};

             reverse(arr, 6);
             reverse(brr, 5);

             printArray(arr, 6);
             printArray(arr, 5);
                                             */


            //  Alternate Reverse

            void printArray(int arr[], int n) {

                for (int  i= 0; i<n ; i++) {
                    cout << arr[i] <<" ";
                }
                cout << endl;
            }

            void swapAlternate(int arr[] , int size) {
                for (int i = 0; i<size; i+=2) {
                    if (i+1 <size) {
                        swap(arr[i], arr[i+1]);
                    }
                }
            }

            int main () {

                int even[8] = {1,2,4, 5, 6, 8, 9,44};
                int odd[5] = {2,4,6,3,8};

                swapAlternate(even, 8);
                printArray(even, 8);



         return 0;
     }














