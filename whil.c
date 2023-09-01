#include<stdio.h>
int main()
{

    int n, i=1;
    printf("Enter a number:");
    scanf("%d", &n);

    while (i<=10)
    {
        if (i == 6)
        {
            break;
        }
        
        printf("%d*%d = %d\n",n,i, n*i);
        i++;

    }
    return 0;

    
}