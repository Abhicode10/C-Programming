#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

// Ternary operater ka use kar codition cheak kar sakte hai 
    num%2==0 ? printf("%d is even number", num) : printf("%d is Odd number", num);
    return 0;

}