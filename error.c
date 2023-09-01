#include<stdio.h>
int main()
{    
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    int a=15;
    int b=20;
    int sum=a+b;
    printf("Sum:%d \n", sum);
    num%2 == 0 ? printf("A number is Even") : printf("A number is odd");

    return 0;


}