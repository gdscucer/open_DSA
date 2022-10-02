#include<iostream>
using namespace std;


int sumNatural(int x){

    if(x==1)
    return 1;

    else
    return{sumNatural(x-1)+x};

}

int main()
{
cout<<sumNatural(5);
    return 0;
}