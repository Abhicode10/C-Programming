// WAP to calculate sum of two number data given by user (Useing Arrays)
#include<stdio.h>
int main(){

    int number[2];
    printf("Enter the number[0]:");
    scanf("%d", &number[0]);
    printf("Enter the number[1]:");
    scanf("%d", &number[1]);

    number[2]=number[0]+number[1];
    
    printf("Sum of two number: %d", number[2]);
    return 0;

}