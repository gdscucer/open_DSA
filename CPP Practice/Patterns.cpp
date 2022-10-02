#include <iostream>

using namespace std;

int main()
{
    // start printing

    /*
     int n;
     cin >> n;

     int i =1;

     while(i<=n) {

         int j = 1;
         while(j<=n) {
             cout<< "*";
             j =j+1;

         }
         cout<<endl;
         i=i+1;
     }


    //Number pattern printing

    int n;
     cin >> n;
     int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n) {
            cout << i;
            j = j + 1;
        }
            cout<<endl;
            i = i + 1;

    }

    //Pattern 2

          int n;
          cin>>n;

          int i = 1;

          while(i<=n) {

              int j =1;
              while(j<=n) {
                  cout<<n-j+1;  // j
                  j = j + 1;
              }
              cout<<endl;
              i = i + 1;
          }

        // pattern 3

            int n;
            cin>>n;

            int i = 1;
            int count = 1;
            while(i<=n) {

                int  j=1;
                while(j<=n) {
                    cout<<count<<" ";
                    count = count + 1 ;
                    j = j + 1;
                }
                cout<<endl;
                i = i+1;
            }


        // Pattern 4

        int n;
        cin>>n;

        int row = 1;

        while(row<=n){

        int col = 1;
        while(col<=row) {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
}


        // Pattern 5

        int n;
        int count =1;
        cin>>n;

        int row = 1;

        while(row<=n){

            int  col =1;
            while(col<=row) {
                cout<<count;
                count = count + 1;
                col = col +1;
            }
            cout<<endl;
            row = row + 1;
        }

        // pattern 6

          int n;
        int row = 1;
        cin>>n;

        while(row<=n){

            int  col =1;
            int value = row;
            while(col<=row) {
                cout<<value;
                value = value + 1;
                col = col +1;
            }
            cout<<endl;
            row = row + 1;
        }

        // Pattern 7

        int n;
        cin>>n;

        int i = 1;

        while(i <= n) {

             int j = 1;
             while(j <= i) {
                 cout<<(i-j+1)<<" ";
                 j = j + 1;
             }
             cout<<endl;
             i = i + 1;
        }

        // pattern 8
        int  n;
        cin>>n;
        int row =1;
         while(row <= n){

              int col =1;

              while(col<= n){
                  char ch ='A' + col -1; // typecast
                  cout<< ch;
                  col = col + 1;
              }
              cout<<endl;
              row = row + 1;
         }

         // Pattern 9
         int n;
         cin>>n;

         int row = 1;
          while(row <= n) {

              int col = 1;
              char start= 'A' + n - row;
              while(col <= row) {
                  cout<< start;
                  start = start + 1;
                  col = col +1;
              }
              cout<< endl;
              row = row +1;
          }


     // pattern 10
        int n;
        cin>>n;

         int row = 1;
         while(row <= n) {

             //space print karo
             int space = n - row;
             while(space) {
                 cout<<" ";
                 space = space -1;
             }

             // star print hoga
             int col =1;
             while(col <= row){
                 cout<<'*';
                 col = col +1;
             }
             cout<<endl;
             row = row +1;
         }
          */
          int n =1;
          cin>>n;
           int row = 1;

           while(row<=n) {

               //Print karo space
               int space = n - row;
               while(space) {
                   cout<<" ";
                   space = space -1;
               }

               // Print 2nd triangle
               int j = 1;
               while(j<= row) {
                   cout<<j;
                   j = j+1;
               }

               // print 3rd triangle

               int start = row - 1;
               while(start) {
                   cout<<start;
                   start = start -1;
               }
               cout<<endl;
               row = row + 1;
           }

    return 0;
}


