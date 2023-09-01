#include<stdio.h>

void square(int n);   // declaration function
void _square(int *n);


int main(){
    int number =4;
    square(number);      // call function 
    printf("number=%d\n", number);

    _square(&number);       // call function 
    printf("Number=%d\n", number);
    return 0;
    
}

// call by value fuction hai (function defination)

void square(int n){
    n = n*n;
    printf("square=%d\n", n);
}

// call by Reference  fuction hai (defination)
void _square(int *n){
    *n= (*n) * (*n);
    printf("square=%d\n", *n);

}
