#include<stdio.h>
int main()
{
    int sum[3];
    printf("Enter 1st number:");
    scanf("%d", &sum[0]);

    printf("Enter 2st number:");
    scanf("%d", &sum[1]);

    sum[2]=sum[0]+sum[1];
    printf("Sumof two number:%d", sum[2]);

    return 0;

}