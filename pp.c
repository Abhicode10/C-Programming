#include<stdio.h>
int main()
{
    int myage=21;
    int *ptr=&myage;

    printf("%d\n", myage);
    printf("%d\n", *ptr);

    printf("%p\n", &myage);

    printf("%d\n", ptr);
    printf("%u\n", &ptr);
    return 0;


}