

//recursive func for power of any no. using recursion
#include<iostream>
using namespace std;


int powerNumber(int base, int power){
if(power==0)
return 1;

else
return (base*powerNumber(base,power-1));
}

int main()
{

cout<<powerNumber(2,3);
    return 0;
}
