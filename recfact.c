#include<stdio.h>

int fact(int n);   // Declaration function

int main(){
    printf("factorial is : %d", fact(4));   // call function 
    return 0;

}

// Defination function 

int fact(int n){
    if(n ==0){
        return 1;

    }
    int factNm1 = fact(n-1);
    int factN= factNm1 * n;
    return factN;

}
