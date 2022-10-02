#include<iostream>
using namespace std;

int fun(int m,int n){
if(n==0||m==0)
return 1;
else{
    return (fun(m-1,n)+fun(m,n-1));
    cout<<n;
}

}

int main(){
cout<<fun(2,3);
    return 0;
}