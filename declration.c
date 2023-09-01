#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable

    printf("size of int:%d\n", sizeof(intType));
    printf("size of float:%d\n", sizeof(floatType));
    printf("size of double:%d\n", sizeof(doubleType));
    printf("size of char:%d\n", sizeof(charType));

    return 0;
    

}