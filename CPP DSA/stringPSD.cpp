#include<iostream>
using namespace std;

void fun(char *ptr){
if(*ptr)

{
    fun(ptr+1);
    cout<<*ptr;
}

}
int main(){
    
    char name[]="HELLO";
    fun(name);
} 

