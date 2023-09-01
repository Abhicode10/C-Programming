#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the three number\n");
    scanf("%f%f%f", &a,&b,&c);
    float avg= (a+b+c)/3;
    printf("avg of three number:%f\n", avg);
    return 0;
    }