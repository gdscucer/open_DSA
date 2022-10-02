          // Funtions
     // ques - Counting numbers
#include <iostream>
using namespace std;

/*
// funtions signature
void printcounting(int num) {

    // funtion body
    for (int i=0; i<=num; i++) {
        cout<< i << " ";
    }
    cout << endl;
}



int main() {
    int n;
    cin >> n;

    //funtion call
    printcounting(n);



			   // Ques - Even odd numbers

	      // 1-> Even
	      // 0-> odd
boolisEven (int a)
{
  //odd
  if (a & 1)
    {
      return 0;
    }
  else
    {
      return 1;			// Even
    }
}

int main ()
{
  int num;
  cin >> num;

  if (isEven (num))
    {
      cout << "Number is Even" << endl;

    }
  else
    {
      cout << "Number is odd" << endl;
    }

                              // Ques - funtion Intro (Power)

        int main (){

        int a , b;
        cin >> a>> b;
        int ans = 1;

        for(int i=1; i<=b; i++) {
            ans = ans * a;
        }
        cout << "Answer is "<< ans <<endl;




         // Ques -    nCr  = n! /r! * (n-r)!


                 // funtion bana diya
        int factorial(int n){

            int fact = 1;

            for(int i =1; i<=n; i++){
                fact = fact * i;
            }
            return fact;
        }
               // funtion ko logic dediya
        int nCr(int n, int r){

            int num = factorial(n);

            int denom = factorial(r) * factorial(n-r);

            return num/denom;
        }

       int main () {
           int n ,r;

           cin >> n >>r;

           cout<< "Answer is " << nCr(n,r) << endl;
                                    */


                   //Ques - Prime number using funtion

                   // 0 -> Not a prime number
                   // 1 -> Is prime number

    bool isPrime(int n) {
        for (int i =2 ; i<n; i++){

            if(n % i == 0 ) {

                return 0;
            }
        }
        return 1;
        }

        int main () {

            int n;
            cin >> n;
            if(isPrime(n)) {
                cout << "Is a prime number" << endl;

            }

            else {
                cout << " Not a prime number" << endl;
            }
        }







