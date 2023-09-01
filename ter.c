#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter a number:");
    scanf("%d", &n);

    n%2==0 ? printf("Even number"):printf("Odd number");

    a=10+2*12/(3*2)+5;
    printf("%d\n", a);



    return 0;

}