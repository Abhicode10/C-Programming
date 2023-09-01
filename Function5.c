#include<stdio.h>
 // Declaraction prototype function
void printTable(int n);


int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    printTable(n);  // argument or actual parameter

    return 0;
}


void printTable(int n){          // parameter or formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);

    }
}