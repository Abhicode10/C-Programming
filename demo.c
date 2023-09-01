#include<stdio.h>
#include<math.h>
// WAP to calculate area of rectangular
int main()
{
    int l,w,A;
    printf("Enter length value\n");
    scanf("%d", &l);
    printf("Enter width value \n");
    scanf("%d", &w);
    A= l*w; 
    printf("area of rectangular:%d\n", A);
    return 0;


}