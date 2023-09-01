#include<stdio.h>
int main()
{
    int marks1=50;
    int marks2=40;
    int *ptr1=&marks1;
    int *ptr2=&marks2;

    printf("%d", ptr1-ptr2);
    return 0;
    
}