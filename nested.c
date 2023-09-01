#include<stdio.h>
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d", &num);
// nested if use kiya hai
    if(num >=0){
        printf("Positive number \n");
        if (num %2 ==0){
            printf("even number \n");
            
        } else{
            printf("odd number \n");
            
        } 

    } else{
        printf("Negative number \n");
    
    }
}