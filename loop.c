#include<stdio.h>
int main()
{
    int i;
    for (i = 1; i<=5; i=i+1)
    {
        printf("Hello world\n");
        printf("%d\n", i);
    }

     // print the numbers from 0 to n if n is given by user 
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int a= 1; a<=10; a++)
    {
        printf("2*%d = %d\n", a, 2*a);
        
        
    }
    return 0;
    
}
    


