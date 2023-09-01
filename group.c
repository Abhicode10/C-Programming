// Write a program  to calculate sum using switch condition
#include<stdio.h>
int main()

{
    int a,b;
    char choice;
    printf("Enter your choice:");
    scanf("%c",  &choice);
    printf("Enter the two number\n");
    scanf("%d%d",  &a,&b);

    switch (choice)
    {
    case 'a': printf("%d+%d=%d\n", a,b,(a+b));
        break;
    case 'b': printf("%d-%d=%d\n", a,b,(a-b));
        break;
    case 'c': printf("%d*%d=%d\n", a,b,(a*b));
        break;
    case 'd': printf("%d/%d=%d\n", a,b,(a/b));
        break;
     default: printf("Invalid choice");
       break;
    }

}




