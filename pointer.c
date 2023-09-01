// pointer variable use karna shikhe

#include<stdio.h>

int main(){
    int age=22;     // Normal varibale decliation 
    int *ptr=&age;   // pointer variable declaration 
    int _age= *ptr;   // pointer variable ki value find
    printf("%d", _age);

    return 0;

}




















