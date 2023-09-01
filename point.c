#include<stdio.h>
int main()
{
    int age=21;
    int *ptr=&age;
    int _age = *ptr;
    printf("%p\n", ptr);
    printf("%p]\n", &age);
    printf("%p\n", &ptr);

    printf("%u\n", ptr);
    printf("%u\n", &age);
    printf("%u\n", &ptr);

    printf("%d\n", _age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));




    return 0;




}