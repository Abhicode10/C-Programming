#include<stdio.h>

void printAddress(int n);  // declaration function
void _printAddress(int *n);

int main(){
    int n = 4;

    printAddress(n);   //calling function
    _printAddress(&n);

    printf("addess of n is: %p\n", &n);
    printf("addess of n is: %u\n", &n);

    printf("addess of n is: %u\n", &n);
    return 0;

}

// call by vlue (Defination function)
void printAddress(int n){
    printf("addess of n is: %p\n",  &n);
    printf("addess of n is: %u\n",  &n);
}

// call by referance (Defination function)
void _printAddress(int *n){
    printf("addess of n is: %u\n", n);

}

