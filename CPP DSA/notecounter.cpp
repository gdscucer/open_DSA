#include<iostream>
using namespace std;
int main()
{
    int amt;
    int n500, n200,n100, n50,n20, n10;
    cout<<"Enter total amount"<<endl;
    cin>>amt;

    switch (amt)
    {
    case a:
    n500=amt/500;
    amt=amt-(n500*500);
            break;
    
    case b: 
    n200=amt/200;
    amt=amt-(n200*200);
    break;

     case c:
     n100=amt/100;
     amt-=(n100*100);
     break;

case d:
     n50=amt/50;
     amt-=(n50*50);
     break;

case e:
     n20=amt/20;
     amt-=(n20*20);
     break;

     case f:
     n10=amt/10;
     amt-=(n10*10);
     break;
    default:
    cout<<"Enter a valid amount"<<endl;
        break;
    } 
}
