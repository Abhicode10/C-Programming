#include<stdio.h>

int main(){
    int age=22;     // Normal varibale decliation 
    int *ptr=&age;   // pointer variable declaration 
    
    // address in hexadecimal value use(%p)
    printf("%p \n", &age);
    printf("%p \n", ptr);               
    printf("%p \n", &ptr);

    // address in unsigned int use(%u)

    printf("%u \n", &age);
    printf("%u \n", ptr);
    printf("%u \n", &ptr);




    return 0;
}