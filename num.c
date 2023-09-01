#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number1:");
    scanf("%d", &a);
    printf("Enter the number2:");
    scanf("%d", &b);

    if (a>b)
    {
        printf("is a maximum number:%d\n", a);
    }
    if (b>a)
    {
        printf("is a maximum number:%d\n", b);
    }
    if (a == b)
    {
        printf("Both are equal number");
    }
    return 0;

}
