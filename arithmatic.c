#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c ,d,e,f,g ,z,x,y,w;
    a=5;
    b=10;
    c=a+b;
    d=pow(a,b);
    e=5%10;
    f=1.999999;
    g=(int)1.999999;
    int prece=4+9*10/2;
    int Assoc=4*3/6*2;
    z=5*2-2*3;
    x=5*2/2*3;
    y=5*(2/2)*3;
    w = 5+2/2*3;
    printf("Multi operater solved= %d\n", z);
    printf("Multi operater solved= %d\n", x);
    printf("Multi operater solved= %d\n", y);
    printf("Multi operater solved= %d\n", w);
    printf("multi operater solved= %d \n", Assoc);
    printf("Multi Operater solved= %d \n", prece); 
    printf("%d \n", f);
    printf("%d \n", g);
    printf("remainder= %d \n", e);
    printf("power of b^c= %d \n", d);

    printf("Sum of a+b = %d", c);                                                                                                   
    return 0;

    
}