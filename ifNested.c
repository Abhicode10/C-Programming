#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbe:\n");
    scanf("%d %d",  &a,&b);

// Nested if else  codition use 
    if (a!=b)
    {
        printf("a is not equal to b\n");

        if (a>b)
        {
            printf("a is greater than b\n");
        }
        else
        {
            printf("b is greater than a\n");

        }
    }
    else 
    {
        printf("a is equal to b\n");

    }
    return 0;

}