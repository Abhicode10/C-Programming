#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf ("%d", &num);

    if (num>=1)
    printf("Is a natural number");
    else if (num<1)
    printf("Not natural number");

    return 0;


    
}