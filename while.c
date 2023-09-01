#include<stdio.h>
int main()
{
    int i=1;
    while (i<=5)
    {
        printf("Abhishek Yadav\n");
        i++;
    }
    // print the numbers from 0 to n if n is given by user 
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int a=0;
    while (a<=n)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
    
}