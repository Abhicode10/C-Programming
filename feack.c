#include<stdio.h>
int main()
{
    int a=9;
    float b=2.5;
    double c=8;
    char d=98;

    // sizeof evaluates the size of a variable

    printf("size of int:%d\n", sizeof(a));
    printf("size of float:%f\n", sizeof(b));
    printf("size of double:%d\n", sizeof(c));
    printf("size of char:%d\n", sizeof(d));

    return 0;
    

}