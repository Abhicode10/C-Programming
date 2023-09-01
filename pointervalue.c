#include<stdio.h>

int main(){
    int age=22;     // Normal varibale decliation 
    int *ptr=&age;   // pointer variable declaration 
    
    // Value  use(%d)

    printf("%d \n", age);
    printf("%d \n", *ptr);               
    printf("%d \n", *(&age));

    return 0;
}