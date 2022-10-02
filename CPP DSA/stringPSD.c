#include<stdio.h>

void fun(char *ptr){
if(*ptr)

{
    fun(ptr+1);
    printf("%c",*ptr);
}

}
int main(){
    
    char name[]="HELLO";
    fun(name);
} 

