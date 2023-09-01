#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("Hello world\n");
        printf("%d\n", i);
        i++;
    } 
    while (i<=5);

    // print the sum of First n Natural Numbers if n is given by user
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int sum, a;
    a=1;
    sum=0;
    
    do
    {
        
        sum = sum+a;
        a++;
    } while (a<=n);

   
    printf("Sum is %d\n", sum);

     // also, print them in reverse number , number is n

    for (int i=n; i>=1; i--)
    {
        printf("%d\n", i);

    }

    
    return 0;
    
}