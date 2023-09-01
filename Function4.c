#include<stdio.h>

int sum(int a, int b);  // Declaraction prototype function

int main(){
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter Second number:");
    scanf("%d", &b);

    int s =sum(a, b);    // call funcation 
    printf("sum is: %d \n", s);

    return 0;
}

// function defination

int sum(int a, int b){
    return a + b;

}

