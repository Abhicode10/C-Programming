//Write a function to calculate the sum product and avg  given 2 number

#include<stdio.h>

void dowork(int a, int b, int *sum, int *product, int *avg);  // Declaration function 

int main(){
    int a=3, b=3;
    int sum, product, avg;
    dowork(a,b,&sum, &product, &avg);  // calling function 

    printf("sum= %d, prduct= %d, avg=%d\n", sum,product, avg);
    return 0;


}

// Defination function
void dowork(int a, int b, int *sum , int *product, int *avg){
    *sum = a+b;
    *product= a*b;
    *avg= (a+b)/2;

}