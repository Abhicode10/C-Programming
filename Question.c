// keep taking numbers as input from user until enters an odd number.
#include<stdio.h>
int main()
{
    int n;
    do
    {   
        printf("Enter the number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n%2 != 0){
            break;
        }

    } while (1);
    printf("End\n");

    // print the factorial of a number n.
    int m;
    printf("Enter the number:");
    scanf("%d", m);

    int fact=1;
    for(int i=1; i<=m; i++)
    {
        fact=fact*i;
    }

    printf("Factorial of a number:%d\n, fact");

    return 0;

    
}