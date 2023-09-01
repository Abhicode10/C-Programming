#include<stdio.h>
#include<math.h>
//  WAP to calculate area of trangle by using= square (s*(s-a)*(s-b)*(s-c))
int main()
{
    float a,b,c,s,A;
    printf("Enter the three side of length \n");
    scanf("%f%f%f", &a, &b, &c);
    s= (a+b+c)/2;
    A= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle= %f\n", A);
    return 0;





}
