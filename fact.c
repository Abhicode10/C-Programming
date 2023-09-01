#include<stdio.h>
int main()
{

// print the factorial of a number n.
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }

    printf("Factorial of %d is %d",n, fact);

    return 0;

}